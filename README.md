# FORR3CG Vor 2020 - Lokaverkefni (35%)
Áður en lengra er haldið skalt þú stofna nýtt **private** repo á github og bjóða *gestskoli* inn sem collaberator. Farðu svo inn á Innu og skila slóðinni að repo-inu í **Lokaverkefni** skilahólfið.
## Almennar reglur varðandi verkefnið
 - Verkefnið er einstaklingsverkefni. Ef tveir eða fleiri nemendur skila sömu lausnunum er gefið 0 (núll) fyrir þær lausnir.
 - Ef kóði er tekinn af netinu (eða öðrum álíka stöðum) skal taka það fram, benda á hvaðan hann kemur og skrifa skýringar (e. comment) við hverja línu kóðans. Almennt eru ekki gefin stig fyrir kóða sem tekinn er af netinu en hann getur samt gefið örfá stig ef hann er t.d. til að bæta útlit forritsins.
 - Ekki er heimilt að nota tilbúnar lausnir fyrir listann. Notið ekki auto og allir bendar (e. pointer) skulu vera hráir (e. raw).
 - Allur kóði skal skrifaður í C++. Skipta á hverjum klasa í cpp og h skrár.
### Skýrsla
Halda skal utan um verkefnið á github. Þar á að vera allur kóði ásamt dagbók og skýrslu. Í dagbókinni á að halda utan um hvað er gert og hvenær (ef eitthvað er ekki í dagbókinni þá er það ekki í verkefninu). Skýrslan er svo stutt samantekt á dagbókinni á samt útskýringum á hvernig forritið ykkar vinnur. Þar eiga líka að vera leiðbeiningar fyrir viðmótið sem þið skrifið. Skilið einnig stuttu myndbandi (screen recort) þar sem virkni forritsins er sýnd.
## Bókasafnskerfi
Bókasafn Tölvubrautar vantar forrit (skrifað í C++) til að halda utan um safnkost sinn. Í dag eru í bókasafninu bækur, tímarit og myndbönd. Fyrir hver safnkost þarf að skrá *id* (heiltala) og *titil* (strengur) en svo er mismunandi hvað meira er skráð eftir hvernig safnkosturinn er. Fyrir bækur bætist svo við *höfundur* (strengur), fyrir tímarit bætist við *tölublað* (heiltala) og fyrir myndbönd bætist við *lengd* (heiltala) í mínútum. Forritið þarf að geta skráð, uppfært (breytt), eytt og skrifað út á skjá safnkosti sem til eru.
### Grunnkröfur
Fullkomin lausn á grunnkröfum gefur 60 stig.
* Gerður klasa fyrir hverja gerð safnkosts og svo einn yfirklasi sem heldur utan um gögn sem eru sameiginleg í hinum klösunum (id og titill).
* Gerðu getters og setters fyrir allar gagnabreytur klasanna.
* Klasarnir þurfa að geta prentað sjálfa sig á skjáinn.
* Útfærðu þinn eigin listaklasa sem heldur utan um allt sem er í bókasafninu:
  * Kviklegt fylki (e. dynamic array), gefur engin aukastig ofan á grunnkröfur.
  * Tengdur listi (e. linked list), gefur 10 aukastig ofan á grunnkröfur.
  * Tætitafla (e. hash table, hash map, dictionary), gefur 20 aukastig ofan á grunnkröfur.
* Gerðu notendaviðmót þar sem hægt er að gera eftirfarandi:
  * Það þarf að vera hægt að setja safnkost í listann.
  * Það þarf að vera hægt að sækja safnkost úr listann.
  * Það þarf að vera hægt að eyða safnkosti úr listann.
  * Það þarf að vera hægt að uppfæra safnkost í listann, hér er nóg að geta uppfært eina gerð af safnkosti.
  * Til einföldunar þá má gera ráð fyrir að titill og höfundur sé alltaf bara eitt orð.
  * Hafðu notendaviðmótið sem svipuðu sniði og í [Flightbooking](https://nam.inna.is/api/Attachment/DownloadFile/407198/536375) æfingaverkefninu.
### Dæmi um aukakröfur
* Skráavinnsla, hægt er að skrifa listann í skrár og lesa í listann úr skrá. (15 stig)
  - Hér er þægilegast að hver klasi kunni að skrifa sig í skrá og lista klasinn geti lesið skrárnar.
* Gögnin eru röðuð í listanum. (5 stig)
* Annað sem ykkur dettur í hug í samráði við kennara.

## Hlutaskil
Skil verkefnisins eru í tvennu lagi:
* Hlutaskil, 30% af lokaeinkunn. Hér á að skila öllum safnkosts klösunum þ.e.a.s. klösunum fyrir bók, tímarit, myndband og svo yfirklasinn. Skilist fyrir miðnætti föstudaginn 24. apríl (ekki verður hægt að fá framlengdan frest). Einkunn fyrir þennan hluta verður gefin fyrir mánudaginn 27. apríl.
* Lokaskil, 70% af lokaeinkunn. Skilist fyrir hádegi laugardaginn 9. maí. Ekki verður hægt að fá framlengingu á þessum tíma.

