// TelefonoNegroAdaptacion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <Windows.h>
#include <stdio.h>
#include <locale.h>

void f_impresion(std::string biblio[], int pos)
{
    for (int i = 0; i < biblio[pos].size(); i++)
    {
        if (biblio[pos][i] == '$')
        {
            std::cout << std::endl;
        }
        else
        {   
            Sleep(0001);
            std::cout << biblio[pos][i];
        }
    }
}

//void f

int main()
{   
    setlocale(LC_ALL, "spanish");
    int posnum = 0;
    int r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13;
    int res;
    std::string texto[19];
    //Inicio
    std::string Inicio = "El telefono negro$Una adaptacion de la antologia de cuentos de terror Fantasmas de Joe Hill$$Responde 1 o 2 para continuar";
    texto[posnum] = Inicio;
    f_impresion(texto, posnum);
    std::cout << std::endl;
    std::cin >> r1;
    system("cls");
    //Acto1
    std::string Acto1 = "Estas sentando en las escaleras del almacén de Poole$tomando un refresco de uva mientras esperas a tu padre.$Al otro lado de la calle miras a un hombre gordo con la cabeza afeitada y brillante que$viste una camisa hawaiana, sus bolsas de papel con las compras están a punto de caerse al suelo.$Te das cuenta que en el momento en el que abra la puerta trasera sus compras se caerán.$1) Decides seguir observando para ver que sucede.$$2) Decides ir a ayudar a ese hombre.";
    //Acto2
    std::string Acto2 = "La parte trasera esta llena de globos y en cuanto la puerta de abre salen todos disparados hacia la$cara del hombre gordo. La bolsa que lleva bajo el brazo izquierdo se estrella en el suelo y se rompe$haciendo que las naranjas rueden en todas las direcciones y sus gafas caen. El hombre comienza a$saltar de puntillas intentando tomar los globos, pero es demasiado tarde, estos ya se alejan en el$aire. Ese hombre maldice y se arrodilla palpando el suelo para buscar sus gafas, su suerte lo lleva a$aplastar un huevo con la mano. Tienes el impulso de ir a ayudarlo pero no estas seguro.$$1) Ir$2) No ir";
    //Acto 3
    std::string Acto3 = "Trotas al otro lado de la calle para ir a ayudar a ese hombre.$-¿Le ayudo señor?$-¿Has visto mis gafas?- Te das cuenta que las gafas estan debajo de la defensa.$-Aqui estan, ¿para que son los globos?$-Soy payaso de medio tiempo- El hombre gordo esta sacando algo de una bolsa de papel$$1) Te acercas un poco por curiosidad.$2) Te alejas, sigues algo indeciso.";
    //Acto 4
    std::string Acto4 = "El hombre se acerca a ti.$-Soy Al, ¿quieres ver algo gracioso?$Levantas tus ojos para ver a Al sosteniendo una lata de acero amarilla y negra, con dibujos de$avispas. La agita con fuerza y sonries pensando en las serpentinas.$El payaso te rocia la cara con una espuma blanca, intentas girar la cabeza pero no eres lo$suficientemente rapido para evitar que te alcance los ojos y la boca. Tus ojos se sienten como$brasas encendidas ardiendo y te quema la garganta. Al te agarra del cuello y te empuja hacia el$interior. Intentas liberarte mordiendo su carne gorda y fofa, aprietas hasta sentir el sabor a sangre$pero aun asi eres atrapado.$$1 o 2) Continuar";
    //Acto 5
    std::string Acto5 = "Escuchas que una puerta se abre de golpe y sientes como alguien te arrastra escaleras abajo.$-Joder, estoy lleno de sangre, como si hubiera matado a alguien. Mira mi brazo- Dice y luego se rie$con incredulidad-. Que tontería. Si no puedes ver nada.$después de un silencio Al vuelve a hablar:$-Ya se que me tienes miedo, pero no voy a hacerte más daño. No estés asustado, porque aquí no$va a pasarte nada. Te doy mi palabra, Johnny.$Al escuchar tu nombre te quedas completamente quieto y dejas de temblar, ni si quiera sabias que$estabas temblando. $-¿Quieres un refresco? Espera, ¿has oido el telefono? Mierda, no es más que el teléfono de la$cocina. De acuerdo, voy a ver quién es y enseguida vuelvo, ¿entonces si quieres el refresco?$$1) Aceptar el refresco.$2)Rechazar el refresco.";
    //Acto 6
    std::string Acto6 = "Abres los ojos y te das cuenta que te quedaste dormido en suelo por quien sabe cuánto tiempo.$Deseas que esto no sea más que un espejismo de tus ojos lastimados. A tu lado ves una botella de$refresco de uva pero decides no abrirla, al otro lado hay un retrete sin asiento y a su derecha, en el$centro de la habitación, una caja o cabina negra pegada a la pared. Es un teléfono. Grande,$anticuado y negro, con el auricular colgando de una horquilla plateada. Sientes un atisbo de$esperanza tan intensa que casi te hace llorar. Piensas que tal vez recuperaste la vista antes que los$otros chicos y Al los mato sin que llegaran a ver el teléfono. Encuentras el auricular y te lo llevas a$la oreja esperando oír el tono de llamada$-No funciona, lleva sin funcionar desde que era un niño – Dice Al -. Cuelga. $Al toma la gaseosa y se la toma, te sientes tonto por no haberla tomado antes. Al te nota$asustado. $- Cuando la puerta está cerrada no se oye nada de lo que pasa en esta habitación.Grita lo que$quieras, no molestaras nadie. - Al habla mientras está abriendo la puerta.$$1) Intentar escapar.$2) Intentar gritar.";
    //Acto 7
    std::string Acto7 = "Abres los ojos y te das cuenta que te quedaste dormido en suelo por quien sabe cuánto tiempo.$Deseas que esto no sea más que un espejismo de tus ojos lastimados. A tu lado hay un retrete sin asiento y a su derecha, $en el centro de la habitación, una caja o cabina negra pegada a la pared. Es un teléfono. Grande, $anticuado y negro, con el auricular colgando de una horquilla plateada. Sientes un atisbo de $esperanza tan intensa que casi te hace llorar. Piensas que tal vez recuperaste la vista antes que los$otros chicos y Al los mato sin que llegaran a ver el teléfono. Encuentras el auricular y te lo llevas a$la oreja esperando oír el tono de llamada. $-No funciona, lleva sin funcionar desde que era un niño – Dice Al -. Cuelga. $Al toma la gaseosa y se la toma, te sientes tonto por no haberla tomado antes. Al te nota $asustado$-Cuando la puerta está cerrada no se oye nada de lo que pasa en esta habitación. Grita lo que$quieras, no molestaras nadie. - Al habla mientras está abriendo la puerta.$$1) Intentar escapar. $2) Intentar gritar.";
    //Acto 8
    std::string Acto8 = "Intentas escapar en el momento que Al tiene la puerta abierta. Corres lo más rápido que puedes$pero tu falta de comida e hidratación hace que te caigas con tu propio pie. Al se ríe$tranquilamente y cierra la puerta. $Gritas y empujas la puerta con todo tu cuerpo, pero no porque piensas que se abrirá, sino porque$piensas si golpeas el marco alguien podría oír escaleras arriba. Gritas hasta que te quedas ronco. $Piensas que es una buena idea explorar la habitación, quizá encuentres algo con lo que puedas$escapar$$1) Explorar habitación.$2) Explorar la habitación, obviamente quiero escapar.";
    
    //Acto 9 
    std::string Acto9 = "Gritas y empujas la puerta con todo tu cuerpo, pero no porque piensas que se abrirá, sino porque $piensas si golpeas el marco alguien podría oír escaleras arriba. Gritas hasta que te quedas ronco$Piensas que es una buena idea explorar la habitación, quizá encuentres algo con lo que puedas$escapar. $$1) Explorar habitación.$2) Explorar la habitación, obviamente quiero escapar.";
    
    //Acto 10
    std::string Acto10 = "Hay dos ventanas de pequeño tamaño, acristaladas, cerca del techo fuer de tu alcance. Estan$tapadas con rejillas oxidadas. Las estudias un tiempo y descubres que es una doble ventana $situada al nivel del suelo y casi oculta por tupidos matorrales, piensas que si logras romperla $alguien te oiría gritar. $-Los otros habrán pensando lo mismo, - piensas para ti mismo- y mira de que les sirvió.$$1) Explorar más.$2) Dejar de explorar.";
    
    //Acto 11
    std::string Acto11 = "Recorres de nuevo la habitación y te encuentras una vez más de pie frente al teléfono,$estudiándolo. Tu mirada sigue un delgado cable negro engrapado a la escayola. Te sorprendes a ti$mismo tomando el auricular y llevándolo a tu oreja. ¿Por qué alguien instalaría un teléfono en el $sótano?$$1 o 2)Continuar";
    
    //Acto 12
    std::string Acto12 = "Te obligas a ponerte de pie y recorres la habitación buscando algo que te de ventaja. En uno de los $rincones encuentras un trozo del sueño de cemento que se había deshecho y convertido en $fragmentos granulares del tamaño de palomitas de maíz, bajo los cuales se asoma una capa de $arena. Decides guardar un puñado de estos granos en tu bolsillo.$Más tarde el estómago te duele de hambre y tomas agua de la cisterna del retrete y permaneces $un rato ahí.$Te despierta el sonido del teléfono, te sientas y lo miras intentando decidir si el teléfono había $sonado realmente cuando volvió a hacerlo, con un sonido penetrante y metálico. Te levantas y te $acercas. $$1 o 2)Continuar ";
    
    //Acto13
    std::string Acto13 = "-¿Dígame?- Oyes el siseo de la electricidad estática.$-John,-era la voz de un niño- escucha John, va a ser hoy. $-¿Quién es? $-No recuerdo mi nombre, es lo primero que se te olvida. $-¿Lo primero que se te olvida cuándo? $-Ya sabes cuándo.$-¿Qué es lo que va a ser hoy? $-Llamo para decirte que tienes una manera de luchar contra él, la tienes en la mano. Arena, que $sea más pesado, ¿entiendes? $-Me encuentro muy débil y no sé si podre enfrentarme a él en este estado. $-Sé que podrás.$$1) Quedarse despierto.$2) Dormir.";
    
    //Final 1
    std::string Final1 = "La oscuridad llega envolviéndote. No duermes en toda la noche esperando a que la puerta se $abriera, que el hombre gordo entrara y la cerrara detrás de él. Pero Al no viene. Tienes la mente $en blanco, concentrado solo en el latido seco de tu pulso y el murmullo distante del viento detrás $de los ventanucos. $El estómago te duele de hambre, en eso escuchas el ruido del cerrojo cuando lo descorren. El $hombre gordo está en el umbral. Ambos se miran desde una distancia de cuatro metros. Al lleva $calzoncillos de rayas, una camisa interior blanca y un hacha en la mano izquierda.$Es hora. No tienes miedo, lo que sientes es algo más grande que el miedo, un terror narcótico que $te inmoviliza por completo que te vuelve incapaz de pensar si quiera en moverte. $$1 o 2)Continuar ";
    
    //Final 2
    std::string Final2 = "Escuchas el familiar sonido del cerrojo. Giras la cabeza, pero no te levantas y te sorprendes al ver a $alguien que no es Albert.$-Joder,-dijo el hermano del Albert- Sabía que tenía algo escondido en el sótano que no quería que $viera, pero ¡joder!$-Por favor ayúdame… pide ayuda.- Dices mientras avanzas vacilante hacia él.$-No te preocupes. Se ha ido, tenía que ir a trabajar. Yo soy Frank. Ahora entiendo por qué se puso $histérico cuando lo llamaron del trabajo. Pero bueno ya estas a salvo.$Albert levanto el hacha y la clavo en cráneo de su hermano con un crujido metálico, hueco y $húmedo. La fuerza del impacto le salpico la cara de sangre. Albert cayo de rodillas en el suelo e $inspiro con fuerza y con los dientes apretados$-¿Has visto eso?-dijo Albert-. ¿Has visto lo que me obligas a hacer? $$1 o 2)Continuar ";
    //Final 2 pt 2
    std::string Final2_2 = "Te acercas a él y le asestas un golpe en la nariz con el auricular. Recuerdas como desenroscaste el$disco del transmisor, rellenando el interior de arena y después lo volviste a enroscar. El hombre $gordo profirió un grito ahogado y la sangre mano de sus fosas nasales y levanta una mano. Le $golpeas de nuevo en la mano con el auricular aplastándole los dedos y finalmente lo golpeas en la $boca cuando intenta atraparte. $Rodeas al hombre gordo por el cuello con el cable y tiras con fuerza cruzando las muñecas. Al otro $lado de la habitación el teléfono negro empieza a sonar mientras Al se asfixiaba y tenía las pupilas$tan dilatadas que el anillo dorado de su iris comenzaba a desaparecer. El teléfono suena de nuevo y $Al dirige la mirada hacia él y luego a tu cara. $-Es para ti- le anuncias. $$1 o 2)Continuar ";
    //Final 3
    std::string Final3 = "Escuchas el familiar sonido del cerrojo. Giras la cabeza, pero no te levantas y te sorprendes al ver a $alguien que no es Albert.$-Joder,-dijo el hermano del Albert- Sabía que tenía algo escondido en el sótano que no quería que $viera, pero ¡joder!$-Por favor ayúdame… pide ayuda.- Dices mientras avanzas vacilante hacia él.$-No te preocupes. Se ha ido, tenía que ir a trabajar. Yo soy Frank. Ahora entiendo por qué se puso $histérico cuando lo llamaron del trabajo. Pero bueno ya estas a salvo. $$1 o 2)Continuar";
    //Creditos
    std::string Credits = "Esta historia fue adaptada por Yessica Arrez de la historia llamada el telefono negro incluida en$el libro Fantasmas de Joe Hill, gracias por leer";
    

    
    if (r1 == 1 || r1 == 2)
    {   
        posnum = 1;
        texto[posnum] = Acto1;
        f_impresion(texto, posnum);
        std::cout << std::endl;
        std::cin >> r2;
        system("cls");
        
        if (r2 == 1)
        {
            posnum = 2;
            texto[posnum] = Acto2;
            f_impresion(texto, posnum);
            std::cout << std::endl;
            std::cin >> r3;
            system("cls");

            if (r3 == 1)
            {
                posnum = 3;
                texto[posnum] = Acto3;
                f_impresion(texto, posnum);
                std::cout << std::endl;
                std::cin >> r4;
                system("cls");
                if (r4 == 1 || r4 == 2)
                {
                    posnum = 4;
                    texto[posnum] = Acto4;
                    f_impresion(texto, posnum);
                    std::cout << std::endl;
                    std::cin >> r5;
                    system("cls");
                    if (r5 == 1 || r5 == 2)
                    {
                        posnum = 5;
                        texto[posnum] = Acto5;
                        f_impresion(texto, posnum);
                        std::cout << std::endl;
                        std::cin >> r6;
                        system("cls");
                        if (r6 == 1)
                        {
                            posnum = 6;
                            texto[posnum] = Acto6;
                            f_impresion(texto, posnum);
                            std::cout << std::endl;
                            std::cin >> r7;
                            system("cls");
                            if (r7 == 1)
                            {
                                posnum = 8;
                                texto[posnum] = Acto8;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r8;
                                system("cls");
                                if (r8 == 1)
                                {
                                    posnum = 10;
                                    texto[posnum] = Acto10;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r9;
                                    system("cls");
                                    if (r9 == 1)
                                    {
                                        posnum = 11;
                                        texto[posnum] = Acto11;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r10;
                                        system("cls");
                                        if (r10 == 1 || r10 == 2)
                                        {
                                            posnum = 14;
                                            texto[posnum] = Final1;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r11;
                                            system("cls");
                                            if (r11 == 1 || r11 == 2)
                                            {
                                                posnum = 18;
                                                texto[posnum] = Credits;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    if (r9 == 2)
                                    {
                                        posnum = 14;
                                        texto[posnum] = Final1;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r10;
                                        system("cls");
                                        if (r10 == 1 || r10 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                if (r8 == 2)
                                {
                                    posnum = 12;
                                    texto[posnum] = Acto12;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r9;
                                    system("cls");
                                    if (r9 == 1 || r9 == 2)
                                    {
                                        posnum = 13;
                                        texto[posnum] = Acto13;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r10;
                                        system("cls");
                                        if (r10 == 1)
                                        {
                                            posnum = 15;
                                            texto[posnum] = Final2;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r11;
                                            system("cls");
                                            if (r11 == 1 || r11 == 2)
                                            {
                                                posnum = 16;
                                                texto[posnum] = Final2_2;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                                std::cin >> r12;
                                                system("cls");
                                                if (r12 == 1 || r12 == 2)
                                                {
                                                    posnum = 18;
                                                    texto[posnum] = Credits;
                                                    f_impresion(texto, posnum);
                                                    std::cout << std::endl;
                                                }
                                                else
                                                {
                                                    std::cout << "Eleccion no valida";
                                                }
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        if (r10 == 2)
                                        {
                                            posnum = 17;
                                            texto[posnum] = Final3;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r11;
                                            system("cls");
                                            if (r11 == 1 || r11 == 2)
                                            {
                                                posnum = 18;
                                                texto[posnum] = Credits;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            if (r7 == 2)
                            {
                                posnum = 9;
                                texto[posnum] = Acto9;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r8;
                                system("cls");
                                if (r8 == 1)
                                {
                                    posnum = 10;
                                    texto[posnum] = Acto10;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r9;
                                    system("cls");
                                    if (r9 == 1)
                                    {
                                        posnum = 11;
                                        texto[posnum] = Acto11;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r10;
                                        system("cls");
                                        if (r10 == 1 || r10 == 2)
                                        {
                                            posnum = 14;
                                            texto[posnum] = Final1;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r11;
                                            system("cls");
                                            if (r11 == 1 || r11 == 2)
                                            {
                                                posnum = 18;
                                                texto[posnum] = Credits;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    if (r9 == 2)
                                    {
                                        posnum = 14;
                                        texto[posnum] = Final1;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r10;
                                        system("cls");
                                        if (r10 == 1 || r10 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                if (r8 == 2)
                                {
                                    posnum = 12;
                                    texto[posnum] = Acto12;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r9;
                                    system("cls");
                                    if (r9 == 1 || r9 == 2)
                                    {
                                        posnum = 13;
                                        texto[posnum] = Acto13;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r10;
                                        system("cls");
                                        if (r10 == 1)
                                        {
                                            posnum = 15;
                                            texto[posnum] = Final2;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r11;
                                            system("cls");
                                            if (r11 == 1 || r11 == 2)
                                            {
                                                posnum = 16;
                                                texto[posnum] = Final2_2;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                                std::cin >> r12;
                                                system("cls");
                                                if (r12 == 1 || r12 == 2)
                                                {
                                                    posnum = 18;
                                                    texto[posnum] = Credits;
                                                    f_impresion(texto, posnum);
                                                    std::cout << std::endl;
                                                }
                                                else
                                                {
                                                    std::cout << "Eleccion no valida";
                                                }
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        if (r10 == 2)
                                        {
                                            posnum = 17;
                                            texto[posnum] = Final3;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r11;
                                            system("cls");
                                            if (r11 == 1 || r11 == 2)
                                            {
                                                posnum = 18;
                                                texto[posnum] = Credits;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            else
                            {
                                std::cout << "Eleccion no valida";
                            }
                        }
                        if (r6 == 2)
                        {
                            posnum = 7;
                            texto[posnum] = Acto7;
                            f_impresion(texto, posnum);
                            std::cout << std::endl;
                            std::cin >> r7;
                            system("cls");
                            if (r7 == 1)
                            {
                                posnum = 8;
                                texto[posnum] = Acto8;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r8;
                                system("cls");
                                if (r8 == 1)
                                {
                                    posnum = 10;
                                    texto[posnum] = Acto10;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r9;
                                    system("cls");
                                    if (r9 == 1)
                                    {
                                        posnum = 11;
                                        texto[posnum] = Acto11;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r10;
                                        system("cls");
                                        if (r10 == 1 || r10 == 2)
                                        {
                                            posnum = 14;
                                            texto[posnum] = Final1;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r11;
                                            system("cls");
                                            if (r11 == 1 || r11 == 2)
                                            {
                                                posnum = 18;
                                                texto[posnum] = Credits;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    if (r9 == 2)
                                    {
                                        posnum = 14;
                                        texto[posnum] = Final1;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r10;
                                        system("cls");
                                        if (r10 == 1 || r10 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                if (r8 == 2)
                                {
                                    posnum = 12;
                                    texto[posnum] = Acto12;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r9;
                                    system("cls");
                                    if (r9 == 1 || r9 == 2)
                                    {
                                        posnum = 13;
                                        texto[posnum] = Acto13;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r10;
                                        system("cls");
                                        if (r10 == 1)
                                        {
                                            posnum = 15;
                                            texto[posnum] = Final2;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r11;
                                            system("cls");
                                            if (r11 == 1 || r11 == 2)
                                            {
                                                posnum = 16;
                                                texto[posnum] = Final2_2;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                                std::cin >> r12;
                                                system("cls");
                                                if (r12 == 1 || r12 == 2)
                                                {
                                                    posnum = 18;
                                                    texto[posnum] = Credits;
                                                    f_impresion(texto, posnum);
                                                    std::cout << std::endl;
                                                }
                                                else
                                                {
                                                    std::cout << "Eleccion no valida";
                                                }
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        if (r10 == 2)
                                        {
                                            posnum = 17;
                                            texto[posnum] = Final3;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r11;
                                            system("cls");
                                            if (r11 == 1 || r11 == 2)
                                            {
                                                posnum = 18;
                                                texto[posnum] = Credits;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            if (r7 == 2)
                            {
                                posnum = 9;
                                texto[posnum] = Acto9;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r8;
                                system("cls");
                                if (r8 == 1)
                                {
                                    posnum = 10;
                                    texto[posnum] = Acto10;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r9;
                                    system("cls");
                                    if (r9 == 1)
                                    {
                                        posnum = 11;
                                        texto[posnum] = Acto11;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r10;
                                        system("cls");
                                        if (r10 == 1 || r10 == 2)
                                        {
                                            posnum = 14;
                                            texto[posnum] = Final1;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r11;
                                            system("cls");
                                            if (r11 == 1 || r11 == 2)
                                            {
                                                posnum = 18;
                                                texto[posnum] = Credits;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    if (r9 == 2)
                                    {
                                        posnum = 14;
                                        texto[posnum] = Final1;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r10;
                                        system("cls");
                                        if (r10 == 1 || r10 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                if (r8 == 2)
                                {
                                    posnum = 12;
                                    texto[posnum] = Acto12;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r9;
                                    system("cls");
                                    if (r9 == 1 || r9 == 2)
                                    {
                                        posnum = 13;
                                        texto[posnum] = Acto13;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r10;
                                        system("cls");
                                        if (r10 == 1)
                                        {
                                            posnum = 15;
                                            texto[posnum] = Final2;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r11;
                                            system("cls");
                                            if (r11 == 1 || r11 == 2)
                                            {
                                                posnum = 16;
                                                texto[posnum] = Final2_2;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                                std::cin >> r12;
                                                system("cls");
                                                if (r12 == 1 || r12 == 2)
                                                {
                                                    posnum = 18;
                                                    texto[posnum] = Credits;
                                                    f_impresion(texto, posnum);
                                                    std::cout << std::endl;
                                                }
                                                else
                                                {
                                                    std::cout << "Eleccion no valida";
                                                }
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        if (r10 == 2)
                                        {
                                            posnum = 17;
                                            texto[posnum] = Final3;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r11;
                                            system("cls");
                                            if (r11 == 1 || r11 == 2)
                                            {
                                                posnum = 18;
                                                texto[posnum] = Credits;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            else
                            {
                                std::cout << "Eleccion no valida";
                            }
                            
                        }
                        else
                        {
                            std::cout << "Eleccion no valida";
                        }
                    }
                    else
                    {
                        std::cout << "Eleccion no valida";
                    }
                }
                else
                {
                    std::cout << "Eleccion no valida";
                }
            }
            if (r3 == 2)
            {
                posnum = 4;
                texto[posnum] = Acto4;
                f_impresion(texto, posnum);
                std::cout << std::endl;
                std::cin >> r4;
                system("cls");
                if (r4 == 1)
                {
                    posnum = 5;
                    texto[posnum] = Acto5;
                    f_impresion(texto, posnum);
                    std::cout << std::endl;
                    std::cin >> r4;
                    system("cls");
                    if (r4 == 1)
                    {
                        posnum = 6;
                        texto[posnum] = Acto6;
                        f_impresion(texto, posnum);
                        std::cout << std::endl;
                        std::cin >> r5;
                        system("cls");
                        if (r5 == 1)
                        {
                            posnum = 8;
                            texto[posnum] = Acto8;
                            f_impresion(texto, posnum);
                            std::cout << std::endl;
                            std::cin >> r6;
                            system("cls");
                            if (r6 == 1)
                            {
                                posnum = 10;
                                texto[posnum] = Acto10;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r7;
                                system("cls");
                                if (r7 == 1)
                                {
                                    posnum = 11;
                                    texto[posnum] = Acto11;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r8;
                                    system("cls");
                                    if (r8 == 1 || r8 == 2)
                                    {
                                        posnum = 14;
                                        texto[posnum] = Final1;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r9;
                                        system("cls");
                                        if (r9 == 1 || r9 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                if (r7 == 2)
                                {
                                    posnum = 14;
                                    texto[posnum] = Final1;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r8;
                                    system("cls");
                                    if (r8 == 1 || r8 == 2)
                                    {
                                        posnum = 18;
                                        texto[posnum] = Credits;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            if (r6 == 2)
                            {
                                posnum = 12;
                                texto[posnum] = Acto12;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r7;
                                system("cls");
                                if (r7 == 1 || r7 == 2)
                                {
                                    posnum = 13;
                                    texto[posnum] = Acto13;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r8;
                                    system("cls");
                                    if (r8 == 1)
                                    {
                                        posnum = 15;
                                        texto[posnum] = Final2;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r9;
                                        system("cls");
                                        if (r9 == 1 || r9 == 2)
                                        {
                                            posnum = 16;
                                            texto[posnum] = Final2_2;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r10;
                                            system("cls");
                                            if (r10 == 1 || r10 == 2)
                                            {
                                                posnum = 18;
                                                texto[posnum] = Credits;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    if (r8 == 2)
                                    {
                                        posnum = 17;
                                        texto[posnum] = Final3;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r9;
                                        system("cls");
                                        if (r9 == 1 || r9 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            else
                            {
                                std::cout << "Eleccion no valida";
                            }
                        }
                        if (r5 == 2)
                        {
                            posnum = 9;
                            texto[posnum] = Acto9;
                            f_impresion(texto, posnum);
                            std::cout << std::endl;
                            std::cin >> r6;
                            system("cls");
                            if (r6 == 1)
                            {
                                posnum = 10;
                                texto[posnum] = Acto10;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r7;
                                system("cls");
                                if (r7 == 1)
                                {
                                    posnum = 11;
                                    texto[posnum] = Acto11;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r8;
                                    system("cls");
                                    if (r8 == 1 || r8 == 2)
                                    {
                                        posnum = 14;
                                        texto[posnum] = Final1;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r9;
                                        system("cls");
                                        if (r9 == 1 || r9 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                if (r7 == 2)
                                {
                                    posnum = 14;
                                    texto[posnum] = Final1;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r8;
                                    system("cls");
                                    if (r8 == 1 || r8 == 2)
                                    {
                                        posnum = 18;
                                        texto[posnum] = Credits;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            if (r6 == 2)
                            {
                                posnum = 12;
                                texto[posnum] = Acto12;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r7;
                                system("cls");
                                if (r7 == 1 || r7 == 2)
                                {
                                    posnum = 13;
                                    texto[posnum] = Acto13;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r8;
                                    system("cls");
                                    if (r8 == 1)
                                    {
                                        posnum = 15;
                                        texto[posnum] = Final2;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r9;
                                        system("cls");
                                        if (r9 == 1 || r9 == 2)
                                        {
                                            posnum = 16;
                                            texto[posnum] = Final2_2;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r10;
                                            system("cls");
                                            if (10 == 1 || 10 == 2)
                                            {
                                                posnum = 18;
                                                texto[posnum] = Credits;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    if (r8 == 2)
                                    {
                                        posnum = 17;
                                        texto[posnum] = Final3;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r9;
                                        system("cls");
                                        if (r9 == 1 || r9 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            else
                            {
                                std::cout << "Eleccion no valida";
                            }
                        }
                        else
                        {
                            std::cout << "Eleccion no valida";
                        }
                    }
                    if (r4 == 2)
                    {
                        posnum = 7;
                        texto[posnum] = Acto7;
                        f_impresion(texto, posnum);
                        std::cout << std::endl;
                        std::cin >> r6;
                        system("cls");
                        if (r5 == 1)
                        {
                            posnum = 8;
                            texto[posnum] = Acto8;
                            f_impresion(texto, posnum);
                            std::cout << std::endl;
                            std::cin >> r6;
                            system("cls");
                            if (r6 == 1)
                            {
                                posnum = 10;
                                texto[posnum] = Acto10;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r7;
                                system("cls");
                                if (r7 == 1)
                                {
                                    posnum = 11;
                                    texto[posnum] = Acto11;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r8;
                                    system("cls");
                                    if (r8 == 1 || r8 == 2)
                                    {
                                        posnum = 14;
                                        texto[posnum] = Final1;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r9;
                                        system("cls");
                                        if (r9 == 1 || r9 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                if (r7 == 2)
                                {
                                    posnum = 14;
                                    texto[posnum] = Final1;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r8;
                                    system("cls");
                                    if (r8 == 1 || r8 == 2)
                                    {
                                        posnum = 18;
                                        texto[posnum] = Credits;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            if (r6 == 2)
                            {
                                posnum = 12;
                                texto[posnum] = Acto12;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r7;
                                system("cls");
                                if (r7 == 1 || r7 == 2)
                                {
                                    posnum = 13;
                                    texto[posnum] = Acto13;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r8;
                                    system("cls");
                                    if (r8 == 1)
                                    {
                                        posnum = 15;
                                        texto[posnum] = Final2;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r9;
                                        system("cls");
                                        if (r9 == 1 || r9 == 2)
                                        {
                                            posnum = 16;
                                            texto[posnum] = Final2_2;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r10;
                                            system("cls");
                                            if (r10 == 1 || r10 == 2)
                                            {
                                                posnum = 18;
                                                texto[posnum] = Credits;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    if (r8 == 2)
                                    {
                                        posnum = 17;
                                        texto[posnum] = Final3;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r9;
                                        system("cls");
                                        if (r9 == 1 || r9 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            else
                            {
                                std::cout << "Eleccion no valida";
                            }
                        }
                        if (r5 == 2)
                        {
                            posnum = 9;
                            texto[posnum] = Acto9;
                            f_impresion(texto, posnum);
                            std::cout << std::endl;
                            std::cin >> r6;
                            system("cls");
                            if (r6 == 1)
                            {
                                posnum = 10;
                                texto[posnum] = Acto10;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r7;
                                system("cls");
                                if (r7 == 1)
                                {
                                    posnum = 11;
                                    texto[posnum] = Acto11;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r8;
                                    system("cls");
                                    if (r8 == 1 || r8 == 2)
                                    {
                                        posnum = 14;
                                        texto[posnum] = Final1;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r9;
                                        system("cls");
                                        if (r9 == 1 || r9 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                if (r7 == 2)
                                {
                                    posnum = 14;
                                    texto[posnum] = Final1;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r8;
                                    system("cls");
                                    if (r8 == 1 || r8 == 2)
                                    {
                                        posnum = 18;
                                        texto[posnum] = Credits;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            if (r6 == 2)
                            {
                                posnum = 12;
                                texto[posnum] = Acto12;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r7;
                                system("cls");
                                if (r7 == 1 || r7 == 2)
                                {
                                    posnum = 13;
                                    texto[posnum] = Acto13;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r8;
                                    system("cls");
                                    if (r8 == 1)
                                    {
                                        posnum = 15;
                                        texto[posnum] = Final2;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r9;
                                        system("cls");
                                        if (r9 == 1 || r9 == 2)
                                        {
                                            posnum = 16;
                                            texto[posnum] = Final2_2;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r10;
                                            system("cls");
                                            if (r10 == 1 || r10 == 2)
                                            {
                                                posnum = 18;
                                                texto[posnum] = Credits;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    if (r8 == 2)
                                    {
                                        posnum = 17;
                                        texto[posnum] = Final3;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r9;
                                        system("cls");
                                        if (r9 == 1 || r9 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            else
                            {
                                std::cout << "Eleccion no valida";
                            }
                        }
                        else
                        {
                            std::cout << "Eleccion no valida";
                        }

                    }
                    else
                    {
                        std::cout << "Eleccion no valida";
                    }
                }

            }
            else
            {
                std::cout << "Eleccion no valida";
            }
        }
        if (r2 == 2)
        {
            posnum = 3;
            texto[posnum] = Acto3;
            f_impresion(texto, posnum);
            std::cout << std::endl;
            std::cin >> r4;
            system("cls");
            if (r4 == 1 || r4 == 2)
            {
                posnum = 4;
                texto[posnum] = Acto4;
                f_impresion(texto, posnum);
                std::cout << std::endl;
                std::cin >> r5;
                system("cls");
                if (r5 == 1 || r5 == 2)
                {
                    posnum = 5;
                    texto[posnum] = Acto5;
                    f_impresion(texto, posnum);
                    std::cout << std::endl;
                    std::cin >> r6;
                    system("cls");
                    if (r6 == 1)
                    {
                        posnum = 6;
                        texto[posnum] = Acto6;
                        f_impresion(texto, posnum);
                        std::cout << std::endl;
                        std::cin >> r7;
                        system("cls");
                        if (r7 == 1)
                        {
                            posnum = 8;
                            texto[posnum] = Acto8;
                            f_impresion(texto, posnum);
                            std::cout << std::endl;
                            std::cin >> r8;
                            system("cls");
                            if (r8 == 1)
                            {
                                posnum = 10;
                                texto[posnum] = Acto10;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r9;
                                system("cls");
                                if (r9 == 1)
                                {
                                    posnum = 11;
                                    texto[posnum] = Acto11;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r10;
                                    system("cls");
                                    if (r10 == 1 || r10 == 2)
                                    {
                                        posnum = 14;
                                        texto[posnum] = Final1;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r11;
                                        system("cls");
                                        if (r11 == 1 || r11 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                if (r9 == 2)
                                {
                                    posnum = 14;
                                    texto[posnum] = Final1;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r10;
                                    system("cls");
                                    if (r10 == 1 || r10 == 2)
                                    {
                                        posnum = 18;
                                        texto[posnum] = Credits;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            if (r8 == 2)
                            {
                                posnum = 12;
                                texto[posnum] = Acto12;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r9;
                                system("cls");
                                if (r9 == 1 || r9 == 2)
                                {
                                    posnum = 13;
                                    texto[posnum] = Acto13;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r10;
                                    system("cls");
                                    if (r10 == 1)
                                    {
                                        posnum = 15;
                                        texto[posnum] = Final2;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r11;
                                        system("cls");
                                        if (r11 == 1 || r11 == 2)
                                        {
                                            posnum = 16;
                                            texto[posnum] = Final2_2;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r12;
                                            system("cls");
                                            if (r12 == 1 || r12 == 2)
                                            {
                                                posnum = 18;
                                                texto[posnum] = Credits;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    if (r10 == 2)
                                    {
                                        posnum = 17;
                                        texto[posnum] = Final3;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r11;
                                        system("cls");
                                        if (r11 == 1 || r11 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            else
                            {
                                std::cout << "Eleccion no valida";
                            }
                        }
                        if (r7 == 2)
                        {
                            posnum = 9;
                            texto[posnum] = Acto9;
                            f_impresion(texto, posnum);
                            std::cout << std::endl;
                            std::cin >> r8;
                            system("cls");
                            if (r8 == 1)
                            {
                                posnum = 10;
                                texto[posnum] = Acto10;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r9;
                                system("cls");
                                if (r9 == 1)
                                {
                                    posnum = 11;
                                    texto[posnum] = Acto11;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r10;
                                    system("cls");
                                    if (r10 == 1 || r10 == 2)
                                    {
                                        posnum = 14;
                                        texto[posnum] = Final1;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r11;
                                        system("cls");
                                        if (r11 == 1 || r11 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                if (r9 == 2)
                                {
                                    posnum = 14;
                                    texto[posnum] = Final1;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r10;
                                    system("cls");
                                    if (r10 == 1 || r10 == 2)
                                    {
                                        posnum = 18;
                                        texto[posnum] = Credits;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            if (r8 == 2)
                            {
                                posnum = 12;
                                texto[posnum] = Acto12;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r9;
                                system("cls");
                                if (r9 == 1 || r9 == 2)
                                {
                                    posnum = 13;
                                    texto[posnum] = Acto13;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r10;
                                    system("cls");
                                    if (r10 == 1)
                                    {
                                        posnum = 15;
                                        texto[posnum] = Final2;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r11;
                                        system("cls");
                                        if (r11 == 1 || r11 == 2)
                                        {
                                            posnum = 16;
                                            texto[posnum] = Final2_2;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r12;
                                            system("cls");
                                            if (r12 == 1 || r12 == 2)
                                            {
                                                posnum = 18;
                                                texto[posnum] = Credits;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    if (r10 == 2)
                                    {
                                        posnum = 17;
                                        texto[posnum] = Final3;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r11;
                                        system("cls");
                                        if (r11 == 1 || r11 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            else
                            {
                                std::cout << "Eleccion no valida";
                            }
                        }
                        else
                        {
                            std::cout << "Eleccion no valida";
                        }
                    }
                    if (r6 == 2)
                    {
                        posnum = 7;
                        texto[posnum] = Acto7;
                        f_impresion(texto, posnum);
                        std::cout << std::endl;
                        std::cin >> r7;
                        system("cls");
                        if (r7 == 1)
                        {
                            posnum = 8;
                            texto[posnum] = Acto8;
                            f_impresion(texto, posnum);
                            std::cout << std::endl;
                            std::cin >> r8;
                            system("cls");
                            if (r8 == 1)
                            {
                                posnum = 10;
                                texto[posnum] = Acto10;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r9;
                                system("cls");
                                if (r9 == 1)
                                {
                                    posnum = 11;
                                    texto[posnum] = Acto11;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r10;
                                    system("cls");
                                    if (r10 == 1 || r10 == 2)
                                    {
                                        posnum = 14;
                                        texto[posnum] = Final1;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r11;
                                        system("cls");
                                        if (r11 == 1 || r11 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                if (r9 == 2)
                                {
                                    posnum = 14;
                                    texto[posnum] = Final1;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r10;
                                    system("cls");
                                    if (r10 == 1 || r10 == 2)
                                    {
                                        posnum = 18;
                                        texto[posnum] = Credits;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            if (r8 == 2)
                            {
                                posnum = 12;
                                texto[posnum] = Acto12;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r9;
                                system("cls");
                                if (r9 == 1 || r9 == 2)
                                {
                                    posnum = 13;
                                    texto[posnum] = Acto13;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r10;
                                    system("cls");
                                    if (r10 == 1)
                                    {
                                        posnum = 15;
                                        texto[posnum] = Final2;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r11;
                                        system("cls");
                                        if (r11 == 1 || r11 == 2)
                                        {
                                            posnum = 16;
                                            texto[posnum] = Final2_2;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r12;
                                            system("cls");
                                            if (r12 == 1 || r12 == 2)
                                            {
                                                posnum = 18;
                                                texto[posnum] = Credits;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    if (r10 == 2)
                                    {
                                        posnum = 17;
                                        texto[posnum] = Final3;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r11;
                                        system("cls");
                                        if (r11 == 1 || r11 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            else
                            {
                                std::cout << "Eleccion no valida";
                            }
                        }
                        if (r7 == 2)
                        {
                            posnum = 9;
                            texto[posnum] = Acto9;
                            f_impresion(texto, posnum);
                            std::cout << std::endl;
                            std::cin >> r8;
                            system("cls");
                            if (r8 == 1)
                            {
                                posnum = 10;
                                texto[posnum] = Acto10;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r9;
                                system("cls");
                                if (r9 == 1)
                                {
                                    posnum = 11;
                                    texto[posnum] = Acto11;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r10;
                                    system("cls");
                                    if (r10 == 1 || r10 == 2)
                                    {
                                        posnum = 14;
                                        texto[posnum] = Final1;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r11;
                                        system("cls");
                                        if (r11 == 1 || r11 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                if (r9 == 2)
                                {
                                    posnum = 14;
                                    texto[posnum] = Final1;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r10;
                                    system("cls");
                                    if (r10 == 1 || r10 == 2)
                                    {
                                        posnum = 18;
                                        texto[posnum] = Credits;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            if (r8 == 2)
                            {
                                posnum = 12;
                                texto[posnum] = Acto12;
                                f_impresion(texto, posnum);
                                std::cout << std::endl;
                                std::cin >> r9;
                                system("cls");
                                if (r9 == 1 || r9 == 2)
                                {
                                    posnum = 13;
                                    texto[posnum] = Acto13;
                                    f_impresion(texto, posnum);
                                    std::cout << std::endl;
                                    std::cin >> r10;
                                    system("cls");
                                    if (r10 == 1)
                                    {
                                        posnum = 15;
                                        texto[posnum] = Final2;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r11;
                                        system("cls");
                                        if (r11 == 1 || r11 == 2)
                                        {
                                            posnum = 16;
                                            texto[posnum] = Final2_2;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                            std::cin >> r12;
                                            system("cls");
                                            if (r12 == 1 || r12 == 2)
                                            {
                                                posnum = 18;
                                                texto[posnum] = Credits;
                                                f_impresion(texto, posnum);
                                                std::cout << std::endl;
                                            }
                                            else
                                            {
                                                std::cout << "Eleccion no valida";
                                            }
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    if (r10 == 2)
                                    {
                                        posnum = 17;
                                        texto[posnum] = Final3;
                                        f_impresion(texto, posnum);
                                        std::cout << std::endl;
                                        std::cin >> r11;
                                        system("cls");
                                        if (r11 == 1 || r11 == 2)
                                        {
                                            posnum = 18;
                                            texto[posnum] = Credits;
                                            f_impresion(texto, posnum);
                                            std::cout << std::endl;
                                        }
                                        else
                                        {
                                            std::cout << "Eleccion no valida";
                                        }
                                    }
                                    else
                                    {
                                        std::cout << "Eleccion no valida";
                                    }
                                }
                                else
                                {
                                    std::cout << "Eleccion no valida";
                                }
                            }
                            else
                            {
                                std::cout << "Eleccion no valida";
                            }
                        }
                        else
                        {
                            std::cout << "Eleccion no valida";
                        }

                    }
                    else
                    {
                        std::cout << "Eleccion no valida";
                    }
                }
                else
                {
                    std::cout << "Eleccion no valida";
                }
            }
            else
            {
                std::cout << "Eleccion no valida";
            }
        }
        else
        {
            std::cout << "Eleccion no valida";
        }
    }
    else
    {
        std::cout << "Eleccion no valida";
    }
    

    
}

