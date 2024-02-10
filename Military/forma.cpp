#include "forma.h"
#include "ui_forma.h"
#include "forminf.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>

Forma::Forma(QWidget *parent, int image_default, int text_default)
    : QWidget(parent)
    , ui(new Ui::Forma),image_default(image_default),  text_default(text_default)
{
    ui->setupUi(this);
    Func_of_array();
    FuncSet(image_default, text_default);
}

Forma::~Forma()
{
    delete ui;
}

void Forma::on_pushButton_clicked()
{
    // Check if a MainWindow instance already exists
    QList<QWidget*> topLevelWidgets = QApplication::topLevelWidgets();
    for (QWidget* widget : topLevelWidgets)
    {
        Forminf* mainWindow = qobject_cast<Forminf*>(widget);
        if (mainWindow)
        {
            // MainWindow instance already exists, bring it to front and close this window
            mainWindow->show();
            this->close();
            return;
        }
    }
    // If no MainWindow instance exists, create a new one
    Forminf* mainWindow = new Forminf();
    mainWindow->show();
    mainWindow->setAttribute(Qt::WA_DeleteOnClose);
    this->close();
}
void Forma::Func_of_array(){
    arr_image.push_back(":/resimg/IMage/imgarta/2c19.jpg");
    arr_image.push_back(":/resimg/IMage/imgarta/2c22.jpg");
    arr_image.push_back(":/resimg/IMage/imgarta/2s3m.jpg");
    arr_image.push_back(":/resimg/IMage/imgarta/m109.jpg");
    arr_image.push_back(":/resimg/IMage/imgarta/m777.jpg");
    arr_image.push_back(":/resimg/IMage/imgarta/PzH2000.jpg");
    arr_image.push_back(":/resimg/IMage/imgavia/f16.jpg");
    arr_image.push_back(":/resimg/IMage/imgavia/Mig29.jpg");
    arr_image.push_back(":/resimg/IMage/imgavia/su25.jpg");
    arr_image.push_back(":/resimg/IMage/imgavia/su27.jpg");
    arr_image.push_back(":/resimg/IMage/imgavia/su30.jpg");
    arr_image.push_back(":/resimg/IMage/imgmlrs/bm21Grad.jpg");
    arr_image.push_back(":/resimg/IMage/imgmlrs/BM27Uragan.jpg");
    arr_image.push_back(":/resimg/IMage/imgmlrs/bm30Smerch.jpg");
    arr_image.push_back(":/resimg/IMage/imgmlrs/Himars.jpg");
    arr_image.push_back(":/resimg/IMage/imgshoot/ak.jpg");
    arr_image.push_back(":/resimg/IMage/imgshoot/ar.jpg");
    arr_image.push_back(":/resimg/IMage/imgtank/Bebrams.png");
    arr_image.push_back(":/resimg/IMage/imgtank/chelenger.png");
    arr_image.push_back(":/resimg/IMage/imgtank/Leopard1.png");
    arr_image.push_back(":/resimg/IMage/imgtank/Leopard2.png");
    arr_image.push_back(":/resimg/IMage/imgtank/t54.png");
    arr_image.push_back(":/resimg/IMage/imgtank/t55.png");
    arr_image.push_back(":/resimg/IMage/imgtank/t62.png");
    arr_image.push_back(":/resimg/IMage/imgtank/t64.png");
    arr_image.push_back(":/resimg/IMage/imgtank/t72.png");
    arr_image.push_back(":/resimg/IMage/imgtank/t80.png");
    arr_image.push_back(":/resimg/IMage/imgtank/t90.png");
    arr_image.push_back(":/resimg/IMage/imgvech/BMP1.png");
    arr_image.push_back(":/resimg/IMage/imgvech/BMP2.png");
    arr_image.push_back(":/resimg/IMage/imgvech/Bredley.jpg");
    arr_image.push_back(":/resimg/IMage/imgvech/BTR80.png");
    arr_image.push_back(":/resimg/IMage/imgvech/cv90.png");
    arr_image.push_back(":/resimg/IMage/imgvech/kozak.jpg");
    arr_image.push_back(":/resimg/IMage/imgvech/m113.png");
    arr_image.push_back(":/resimg/IMage/imgvech/Marder.jpg");
    arr_image.push_back(":/resimg/IMage/imgvech/tiger.jpg");



    arr_text.push_back("2S19 \"Мста-С\" - це російська самохідна артилерійська установка, розроблена для підтримки наземних військ."
                       "Основні характеристики:\n"
                       "Калібр: Озброєна 152-мм гарматою, що дозволяє використовувати широкий спектр артилерійських снарядів.\n"
                       "Мобільність: Має велику маневреність та швидкість, що дозволяє ефективно діяти на полі бою та швидко пересуватися між позиціями.\n"
                       "Автоматизація: Оснащена сучасними системами автоматизації для полегшення процесу наведення та стрільби, що підвищує точність вогню.\n"
                       "Дальність стрільби: 40км.");
    arr_text.push_back("2С22 «Богдана» - це українська колісна самохідна гаубиця калібру 155 мм,"
                       "яка розроблена на базі шасі КрАЗ-6322. Вона призначена для знищення ворожих"
                       "артилерійських установок, бойових машин, живої сили та інших цілей на "
                       "відстані до 60 км. Вона має автоматичну систему заряджання, захищену "
                       "кабіну для екіпажу та можливість швидкої зміни позиції12"
                       "Вона була вперше показана публіці в 2018 році і отримала бойове хрещення в 2022 році під час російсько-української війни.\n"
                       "Дальність стрільби 50км.");
    arr_text.push_back("2C3 \"Акація\" - це радянська самохідна артилерійська установка, розроблена для артилерійської підтримки бодових операцій. Основні характеристики:\n\nКалібр: Озброєна 152-мм гарматою, що дозволяє використовувати різноманітні артилерійські снаряди.\n\nМобільність: Має високу маневреність та можливість вести вогонь як на стоянці, так і під час руху, що забезпечує широкий радіус дій на полі бою.\n\nАвтоматизація: Оснащена системами автоматизації, які полегшують процес наведення та стрільби, забезпечуючи високу точність та ефективність.\n\nДальність стрільби: 24км.");
    arr_text.push_back("M109 - це американська самохідна артилерійська установка, розроблена для забезпечення підтримки земельних військ. Основні характеристики:\n\nКалібр: Озброєна 155-мм гарматою, що дозволяє використовувати різноманітні артилерійські снаряди.\n\nМобільність: Має високу маневреність та можливість вести вогонь як на стоянці, так і під час руху, що дозволяє ефективно взаємодіяти з земельними військами на полі бою.\n\nАвтоматизація: Оснащена сучасними системами автоматизації, що полегшують наведення та стрільбу, забезпечуючи високу точність та ефективність.\n\nДальність стрільби: 30км.");
    arr_text.push_back("Легка буксирувана гаубиця M777 - це модернізована артилерійська гармата, розроблена компанією BAE Systems та використовується в арміях кількох країн. Основні характеристики:\n\nКалібр: M777 має калібр 155 мм, що дозволяє використовувати стандартні артилерійські снаряди цього калібру.\n\nМаса та мобільність: Завдяки використанню легких матеріалів, таких як алюміній та титан, маса гаубиці значно зменшена, що полегшує її транспортування та буксирування.\n\nДальність стрільби: 30 км\n\nАвтоматизація: Обладнана сучасними системами автоматизації, які полегшують процес наведення та стрільби, зменшуючи час між відкриттям вогню та виїздом гаубиці.");
    arr_text.push_back("Самохідна артилерійська установка PzH 2000 - це німецька гаубиця, розроблена для армії Німеччини та кількох інших країн. Основні характеристики:\n"
                       "Калібр: Озброєна 155-мм гарматою, що дозволяє використовувати стандартні артилерійські снаряди цього калібру.\n"
                       "Мобільність: Має високу швидкість та маневреність, що полегшує її пересування на полі бою та швидкий виїзд після стрільби.\n"
                       "Автоматизація: Оснащена сучасними системами автоматизації, які полегшують процес наведення та стрільби, забезпечуючи високу точність.\n"
                       "Дальність стрільби: 41км.");
    arr_text.push_back("Літак F-16, розроблений американською компанією Lockheed Martin, є одним з найпопулярніших винищувачів у світі.\n"
                       "Він має дуже високу маневреність, швидкість і здатність виконувати різноманітні завдання, включаючи повітряну боротьбу, атаку наземних цілей та розвідку.\n"
                       "F-16 є основним літаком в повітряних силах багатьох країн, завдяки своїй надійності і ефективності.");
    arr_text.push_back("Міг-29 є радянським винищувачем, розробленим у 1980-х роках.\n"
                       "Цей літак славиться своєю маневреністю, швидкістю і здатністю виконувати різноманітні завдання в повітрі, включаючи повітряну боротьбу, атаку наземних цілей та забезпечення бомбардувань.\n"
                       "Міг-29 є одним з основних винищувачів у повітряних силах багатьох країн, а також використовується в навчальних програмах для підготовки пілотів.");
    arr_text.push_back("Су-25 - це російський штурмовик, спеціалізований літак для наземних атак. Він має важке бронювання, що дозволяє йому операціонувати в зоні бойових дій.\n"
                       "Су-25 відомий своєю здатністю атакувати наземні цілі, включаючи танки, вантажівки та укріплені позиції. Цей літак був широко використаний в різних конфліктах, включаючи бойові дії в Афганістані, Чечні та інших регіонах.\n"
                       "Він є важливим елементом повітряних сил, який забезпечує підтримку наземним військам під час бойових операцій.");
    arr_text.push_back("Су-27 є російським винищувачем, відомим своєю високою маневреністю та здатністю до повітряної боротьби.\n"
                       "Цей літак був розроблений для забезпечення повітряного переважання і володіє потужними двигунами, що надають йому велику швидкість та дальність польоту.\n"
                       "Су-27 оснащений різноманітними ракетами повітря-повітря та автоматичними пусковими установками.\n"
                       "Він застосовується у повітряних силах багатьох країн і є ключовим компонентом їхнього бойового флоту винищувачів.");
    arr_text.push_back("Су-30 - це російський багатоцільовий винищувач, який також може виконувати завдання повітряної підтримки та бойових дій на малій висоті.\n"
                       "Він відомий своєю високою маневреністю, довгим радіусом дії та здатністю вести бойові дії в різних погодних умовах.\n"
                       "Су-30 має потужне озброєння, включаючи ракети повітря-повітря та повітря-земля, що робить його ефективним і універсальним бойовим літаком.\n"
                       "Цей літак використовується у повітряних силах різних країн, включаючи Росію та інші держави, що володіють технологіями військового спорядження.");
    arr_text.push_back("БМ-21 \"Град\" - це ракетна система залпового вогню, створена в СРСР і вперше введена в експлуатацію у 1963 році.\n"
                       "Вона використовується для стрільби залпами неселективних ракет 122 мм та може вести вогонь на значну відстань.\n"
                       "Система має мобільну платформу, яка дозволяє ефективно використовувати її на полі бою.\n"
                       "Основні характеристики \"Града\" включають велику швидкість та точність стрільби, а також здатність швидко змінювати позиції для ухилення від протипіхотних та противійськових заходів противника.\n"
                       "Вона знайшла широке застосування в різних конфліктах та залишається популярною у декількох країнах світу.");
    arr_text.push_back("БМ-27 Ураган - це реактивна система залпового вогню калібру 220 мм, яка була розроблена в СРСР у 1970-х роках.\n"
                       "Вона може запускати 16 реактивних снарядів з різними бойовими частинами на відстань від 10 до 35 км.\n"
                       "Вона базується на шасі ЗІЛ-135ЛМ і має екіпаж з чотирьох осіб.\n"
                       "Вона використовується арміями деяких країн, в тому числі України.");
    arr_text.push_back("БМ-30 \"Смерч\" - це російська система залпового вогню, також відома як \"Точка-У\". Ця ракетна система призначена для ведення вогню залпами неселективних ракет калібру 300 мм. Вона входить в склад артилерійських військ та забезпечує можливість швидкого та масштабного ведення вогню на значні відстані.\n"
                       "\"Смерч\" може використовувати різні види ракет, включаючи ракети для протитанкового удару, ракети з вибуховою чи збройною відравою.\n"
                       "Система має мобільну платформу, що дозволяє швидко змінювати позиції на полі бою та ухилятися від протипіхотних та противійськових заходів противника.\n"
                       "БМ-30 \"Смерч\" використовується в російських і багатьох інших арміях та має застосування в різних військових конфліктах.");
    arr_text.push_back("HIMARS (High Mobility Artillery Rocket System) - це американська мобільна артилерійська система ракетного залпового вогню.\n"
                       "Система створена для запуску різних типів ракет, включаючи тактичні та протитанкові ракети.\n"
                       "Основна перевага HIMARS - це його висока мобільність та готовність до ефективного ведення вогню з різних місць, в тому числі на непідготовлених польових умовах.\n"
                       "Система може бути швидко розгорнута та виведена з бою, що дозволяє їй бути ефективною в різних сценаріях військових операцій.\n"
                       "HIMARS використовується армією Сполучених Штатів та іншими країнами, надаючи їм потужний і мобільний засіб для ураження різних цілей на великій відстані.\n"
                       "HIMARS (High Mobility Artillery Rocket System) використовує ракети калібру 227 мм (9 дюймів). Дальність пострілу ракети можуть мати дальність близько 300 км та більше, забезпечуючи системі можливість нанесення ударів на значні відстані.");
    arr_text.push_back("Платформа АК - це сімейство автоматичної зброї, що було розроблено в СРСР у 1940-х роках.\n"
                       "АК означає Автомат Калашникова, на честь його головного конструктора Михайла Калашникова.\n"
                       "Платформа АК включає різні модифікації та копії автоматів, карабінів, пістолетів-кулеметів та гвинтівок, що використовують різні калібри патронів.\n"
                       "Платформа АК відома своєю надійністю, простотою та доступністю, і є найпоширенішою платформою автоматичної зброї в світі.");
    arr_text.push_back("Платформа АР - це сімейство автоматичної зброї, що було розроблено в США у 1950-х роках.\n"
                       "АР означає Armalite Rifle, на честь компанії, яка створила першу модель АР-10. Платформа АР включає різні модифікації та копії автоматів, карабінів, пістолетів-кулеметів та гвинтівок, що використовують різні калібри патронів.\n"
                       "Платформа АР відома своєю точністю, легкістю та модульністю, і є однією з найпопулярніших платформ автоматичної зброї в світі.");
    arr_text.push_back("Танк Abrams M1A1 є однією з основних бойових машин Сполучених Штатів та інших країн. Основні характеристики:\n"
                       "Головна зброя: Гладкоствольна гармата M256 (120 мм).\n"
                       "Екіпаж: Зазвичай 4 особи (командир, стрілець-наводчик, водій та зарядник).\n"
                       "Бронювання: Використовує композитне бронювання для підвищеної захисту.\n"
                       "Двигун: Газотурбінний двигун.\n"
                       "Швидкість: Максимальна швидкість на дорозі може досягати близько 67 км/год.\n"
                       "Щодо снарядів та дальності стрільби:\n"
                       "Снаряди: Abrams M1A1 використовує різні типи сучасних снарядів, включаючи бронебійні, вибухові, кумулятивні та протитанкові ракети.\n"
                       "Дальність пострілу: 3 км.");
    arr_text.push_back("Танк Challenger 2 є основним бойовим танком Британської армії. Основні характеристики:\n"
                       "Головна зброя: Гладкоствольна гармата L30A1 (120 мм).\n"
                       "Екіпаж: Зазвичай 4 особи (командир, стрілець-наводчик, водій та зарядник).\n"
                       "Бронювання: Використовує комбіноване бронювання для максимальної захисту від бронебійних снарядів і інших загроз.\n"
                       "Двигун: Дизельний двигун.\n"
                       "Швидкість: Максимальна швидкість на дорозі близько 59 км/год.\n"
                       "Щодо снарядів та дальності стрільби:\n"
                       "Снаряди: Challenger 2 використовує різні типи сучасних снарядів, включаючи бронебійні, вибухові та кумулятивні снаряди.\n"
                       "Дальність пострілу: 8 км.");
    arr_text.push_back("Леопард 1 є серією німецьких середніх танків, яка вперше ввійшла в експлуатацію у 1965 році. Основні характеристики:\n"
                       "Головна зброя: Гладкоствольна гармата Rh 120 (105 мм) в ранніх версіях Leopard 1 і Rh 120 L/44 (105 мм) в пізніших модифікаціях.\n"
                       "Екіпаж: Зазвичай 4 особи (командир, стрілець-наводчик, водій та зарядник).\n"
                       "Бронювання: Леопард 1 використовував концепцію 'бронебійної склянки', тобто броня в основному застосовувалася на передній частині танка.\n"
                       "Двигун: Дизельний двигун.\n"
                       "Швидкість: Максимальна швидкість на дорозі приблизно 65 км/год.\n"
                       "Щодо снарядів та дальності стрільби:\n"
                       "Снаряди: Леопард 1 може використовувати різні типи сучасних снарядів, включаючи бронебійні, вибухові та кумулятивні снаряди.\n"
                       "Дальність пострілу: 4 км.");
    arr_text.push_back("Леопард 2 - це німецький тяжкий танк, розроблений і вперше введений в експлуатацію у 1979 році. Основні характеристики:\n"
                       "Головна зброя: Гладкоствольна гармата Rheinmetall 120 мм L/44 або L/55, здатна використовувати різні типи сучасних снарядів.\n"
                       "Екіпаж: Зазвичай 4 особи (командир, стрілець-наводчик, водій та зарядник).\n"
                       "Бронювання: Використовується композитне бронювання для покращеної захисту.\n"
                       "Двигун: Дизельний двигун.\n"
                       "Швидкість: Максимальна швидкість на дорозі перевищує 70 км/год.\n"
                       "Щодо снарядів та дальності стрільби:\n"
                       "Снаряди: Леопард 2 може використовувати різні типи сучасних снарядів, включаючи бронебійні, вибухові, кумулятивні та підкаліберні снаряди.\n"
                       "Максимальна дальність пострілу: 4000 м.");
    arr_text.push_back("Середній танк Т-54 — Бойова маса 36,4 тон. Екіпаж 4 чоловіки. Озброєння: 100-мм гармата, два 7,62-мм кулемети «СГМТ», 12,7-мм кулемет «ДШК». Броня 100—190 мм. Максимальна швидкість 50 км/год. Потужність двигуна 520 к.с.\n"
                       "Озброєння 100-мм гармата Д-10Т, снаряди:\n"
                       "Бронебійні снаряди (AP): Зазвичай використовуються для пробиття броні противника. Такі снаряди мають важливе значення при боротьбі з іншими танками.\n"
                       "Вибухові снаряди (HE): Використовуються для ураження піхоти, легкої бронетехніки та інших цілей. Вони мають великий заряд вибухового матеріалу.\n"
                       "Кумулятивні снаряди (HEAT): Створені для пробиття броні за рахунок формування струмінів гарячого металу при вибуху.\n"
                       "Дальність пострілу: 4 км для вибухових снарядів.");
    arr_text.push_back("Танк Т-55 є радянським середнім танком, який став популярним у середині XX століття та широко використовувався в багатьох країнах того часу і після нього. Офіційно введений в експлуатацію в 1947 році, Т-55 став наступником Т-54 і був розроблений для поліпшення попередньої моделі.\n"
                       "Основні характеристики Т-55 включають:\n"
                       "Головна зброя: Гладкоствольна гармата Д-10Т (100 мм).\n"
                       "Екіпаж: Зазвичай 4 особи.\n"
                       "Бронювання: Броня танка може різнитися в залежності від конкретної модифікації, але в основному вона має середні бронепластини, здатні захищати від бронебійних снарядів.\n"
                       "Двигун: Дизельний двигун.\n"
                       "Швидкість: Максимальна швидкість на дорозі може досягати більше 50 км/год.\n"
                       "Бронебійні снаряди (AP): Використовуються для пробиття броні противника. Такі снаряди мають спеціальну форму та конструкцію для максимальної проникності.\n"
                       "Вибухові снаряди (HE): Призначені для ураження піхоти, легкої бронетехніки та інших цілей. Вони мають великий заряд вибухового матеріалу.\n"
                       "Кумулятивні снаряди (HEAT): Створені для пробиття броні за рахунок формування струмінів гарячого металу при вибуху.\n"
                       "Дальність пострілу: НЕ 4000м, АР 2000М.");
    arr_text.push_back("Танк Т-62 є радянським середнім танком, введеним в експлуатацію в середині 1960-х років. Основні характеристики:\n"
                       "Головна зброя: Гладкоствольна гармата 2А20 (115 мм).\n"
                       "Екіпаж: Зазвичай 4 особи (командир, стрілець-наводчик, водій та зарядник).\n"
                       "Бронювання: Має середні бронепластини, здатні захищати від бронебійних снарядів.\n"
                       "Двигун: Дизельний двигун.\n"
                       "Швидкість: Максимальна швидкість на дорозі досягає близько 50 км/год.\n"
                       "Щодо снарядів та дальності стрільби:\n"
                       "Снаряди: Використовує різні типи снарядів, включаючи бронебійні, вибухові та кумулятивні снаряди.\n"
                       "Дальність стрільби: Зазвичай дальність стрільби танка Т-62 становить 5.3км, проте конкретні дані можуть варіюватися залежно від типу снаряду та умов стрільби.");
    arr_text.push_back("Танк Т-64 є радянським середнім танком, що вперше був введений в експлуатацію в 1966 році. Основні характеристики:\n"
                       "Головна зброя: Гладкоствольна гармата 2А46 (125 мм).\n"
                       "Екіпаж: Зазвичай 3 особи (командир, стрілець-наводчик та водій).\n"
                       "Бронювання: Має поєднання композитних та литих бронепластин, що робить його більш захищеним порівняно з попередніми моделями.\n"
                       "Двигун: Газотурбінний або дизельний двигун, в залежності від версії.\n"
                       "Швидкість: Максимальна швидкість на дорозі може перевищувати 60 км/год.\n"
                       "Щодо снарядів та дальності стрільби:\n"
                       "Снаряди: Використовує різні типи сучасних снарядів, включаючи бронебійні, вибухові та кумулятивні снаряди.\n"
                       "Дальність стрільби: Максимальна дальність стрільби танка Т-64 9400м.");
    arr_text.push_back("Танк Т-72 є радянським середнім танком, вперше введеним в експлуатацію в 1969 році і залишається однією з найширше використовуваних танків у світі. Основні характеристики:\n"
                       "Головна зброя: Гладкоствольна гармата 2А46М (125 мм).\n"
                       "Екіпаж: Зазвичай 3 особи (командир, стрілець-наводчик та водій).\n"
                       "Бронювання: Включає композитні бронепластини, що забезпечують покращену захисту порівняно з попередніми моделями.\n"
                       "Двигун: Дизельний двигун.\n"
                       "Швидкість: Максимальна швидкість на дорозі близько 60 км/год.\n"
                       "Щодо снарядів та дальності стрільби:\n"
                       "Снаряди: Використовує різні типи сучасних снарядів, включаючи бронебійні, вибухові та кумулятивні снаряди. Також може використовувати протитанкові ракети.\n"
                       "Дальність стрільби: Максимальна дальність стрільби танка Т-72 2200м, в залежності від типу снаряду та інших умов стрільби.");
    arr_text.push_back("Танк Т-80 є радянським і російським середнім танком, введеним в експлуатацію в кінці 1970-х років і вдосконаленого в різних модифікаціях. Основні характеристики:\n"
                       "Головна зброя: Гладкоствольна гармата 2А46М (125 мм), яка може використовувати або стрільбу з бронебійними снарядами, вибуховими снарядами, кумулятивними снарядами, а також протитанковими ракетами.\n"
                       "Екіпаж: Зазвичай 3 особи (командир, стрілець-наводчик та водій).\n"
                       "Бронювання: Застосовані нові технології бронювання, включаючи композитні матеріали.\n"
                       "Двигун: Великий газотурбінний двигун.\n"
                       "Швидкість: Максимальна швидкість може досягати близько 70 км/год.\n"
                       "Дальність пострілу т-80 Снарядом типу (ОФ) 9400м.");
    /////////////////////////////////////////////////////////////
    arr_text.push_back("2S19 \"Мста-С\" - це російська самохідна артилерійська установка, розроблена для підтримки наземних військ."
                       "Основні характеристики:\n"
                       "Калібр: Озброєна 152-мм гарматою, що дозволяє використовувати широкий спектр артилерійських снарядів.\n"
                       "Мобільність: Має велику маневреність та швидкість, що дозволяє ефективно діяти на полі бою та швидко пересуватися між позиціями.\n"
                       "Автоматизація: Оснащена сучасними системами автоматизації для полегшення процесу наведення та стрільби, що підвищує точність вогню.\n"
                       "Дальність стрільби: 40км.");
    arr_text.push_back("2S19 \"Мста-С\" - це російська самохідна артилерійська установка, розроблена для підтримки наземних військ."
                       "Основні характеристики:\n"
                       "Калібр: Озброєна 152-мм гарматою, що дозволяє використовувати широкий спектр артилерійських снарядів.\n"
                       "Мобільність: Має велику маневреність та швидкість, що дозволяє ефективно діяти на полі бою та швидко пересуватися між позиціями.\n"
                       "Автоматизація: Оснащена сучасними системами автоматизації для полегшення процесу наведення та стрільби, що підвищує точність вогню.\n"
                       "Дальність стрільби: 40км.");
    arr_text.push_back("2S19 \"Мста-С\" - це російська самохідна артилерійська установка, розроблена для підтримки наземних військ."
                       "Основні характеристики:\n"
                       "Калібр: Озброєна 152-мм гарматою, що дозволяє використовувати широкий спектр артилерійських снарядів.\n"
                       "Мобільність: Має велику маневреність та швидкість, що дозволяє ефективно діяти на полі бою та швидко пересуватися між позиціями.\n"
                       "Автоматизація: Оснащена сучасними системами автоматизації для полегшення процесу наведення та стрільби, що підвищує точність вогню.\n"
                       "Дальність стрільби: 40км.");
    arr_text.push_back("2S19 \"Мста-С\" - це російська самохідна артилерійська установка, розроблена для підтримки наземних військ."
                       "Основні характеристики:\n"
                       "Калібр: Озброєна 152-мм гарматою, що дозволяє використовувати широкий спектр артилерійських снарядів.\n"
                       "Мобільність: Має велику маневреність та швидкість, що дозволяє ефективно діяти на полі бою та швидко пересуватися між позиціями.\n"
                       "Автоматизація: Оснащена сучасними системами автоматизації для полегшення процесу наведення та стрільби, що підвищує точність вогню.\n"
                       "Дальність стрільби: 40км.");
    arr_text.push_back("2S19 \"Мста-С\" - це російська самохідна артилерійська установка, розроблена для підтримки наземних військ."
                       "Основні характеристики:\n"
                       "Калібр: Озброєна 152-мм гарматою, що дозволяє використовувати широкий спектр артилерійських снарядів.\n"
                       "Мобільність: Має велику маневреність та швидкість, що дозволяє ефективно діяти на полі бою та швидко пересуватися між позиціями.\n"
                       "Автоматизація: Оснащена сучасними системами автоматизації для полегшення процесу наведення та стрільби, що підвищує точність вогню.\n"
                       "Дальність стрільби: 40км.");
    arr_text.push_back("2S19 \"Мста-С\" - це російська самохідна артилерійська установка, розроблена для підтримки наземних військ."
                       "Основні характеристики:\n"
                       "Калібр: Озброєна 152-мм гарматою, що дозволяє використовувати широкий спектр артилерійських снарядів.\n"
                       "Мобільність: Має велику маневреність та швидкість, що дозволяє ефективно діяти на полі бою та швидко пересуватися між позиціями.\n"
                       "Автоматизація: Оснащена сучасними системами автоматизації для полегшення процесу наведення та стрільби, що підвищує точність вогню.\n"
                       "Дальність стрільби: 40км.");
    arr_text.push_back("2S19 \"Мста-С\" - це російська самохідна артилерійська установка, розроблена для підтримки наземних військ."
                       "Основні характеристики:\n"
                       "Калібр: Озброєна 152-мм гарматою, що дозволяє використовувати широкий спектр артилерійських снарядів.\n"
                       "Мобільність: Має велику маневреність та швидкість, що дозволяє ефективно діяти на полі бою та швидко пересуватися між позиціями.\n"
                       "Автоматизація: Оснащена сучасними системами автоматизації для полегшення процесу наведення та стрільби, що підвищує точність вогню.\n"
                       "Дальність стрільби: 40км.");
    arr_text.push_back("2S19 \"Мста-С\" - це російська самохідна артилерійська установка, розроблена для підтримки наземних військ."
                       "Основні характеристики:\n"
                       "Калібр: Озброєна 152-мм гарматою, що дозволяє використовувати широкий спектр артилерійських снарядів.\n"
                       "Мобільність: Має велику маневреність та швидкість, що дозволяє ефективно діяти на полі бою та швидко пересуватися між позиціями.\n"
                       "Автоматизація: Оснащена сучасними системами автоматизації для полегшення процесу наведення та стрільби, що підвищує точність вогню.\n"
                       "Дальність стрільби: 40км.");

}
void Forma::FuncSet(int image, int text){
    // Створюємо об'єкт QPixmap та завантажуємо зображення
    QPixmap pixmap(arr_image[image]);

    // Перевірка, чи вдалося завантажити зображення
    if (!pixmap.isNull()) {
        // Встановлюємо зображення для QLabel
        ui->label->setPixmap(pixmap);
    } else {
        // Обробляємо помилку завантаження зображення
        qDebug() << "Помилка завантаження зображення";
    }
////////////////////////////////////////////////////////

    // Встановлюємо текст
    ui->Textui->setText(arr_text[22]);

    // Встановлюємо автоматичне перенесення рядків
    ui->Textui->setWordWrap(true);
}