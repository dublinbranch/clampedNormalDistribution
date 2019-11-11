////#include "rapidjson/includeMe.h"
////#include <QDebug>
////int main(){

////	const char* bo = R"EOD(
////{
////"ocs": {
//// "meta": {
////   "status": "ok",
////   "statuscode": "200",
////   "message": "OK"
//// },
//// "data": {
////   "element": [
////	 {
////	   "id": "2",
////	   "token": "sqe8v4dt",
////	   "type": "4",
////	   "name": "pieroprocida",
////	   "displayName": "Aggiornamenti Talk ✅",
////	   "objectType": "",
////	   "objectId": "",
////	   "participantType": "3",
////	   "participantInCall": "",
////	   "participantFlags": "0",
////	   "readOnly": "1",
////	   "count": "0",
////	   "hasPassword": "",
////	   "hasCall": "",
////	   "lastActivity": "1565690298",
////	   "unreadMessages": "0",
////	   "unreadMention": "",
////	   "isFavorite": "",
////	   "notificationLevel": "2",
////	   "lastPing": "1566819530",
////	   "sessionId": "0",
////	   "participants": [
////		 {
////		   "pieroprocida": {
////			 "name": "Piero Procida",
////			 "type": "3",
////			 "call": "0",
////			 "sessionId": "0"
////		   }
////		 }
////	   ],
////	   "numGuests": "0",
////	   "guestList": "",
////	   "lastMessage": {
////		 "id": "18",
////		 "actorType": "bots",
////		 "actorId": "changelog",
////		 "actorDisplayName": "Aggiornamenti Talk ✅",
////		 "timestamp": "1565690298",
////		 "message": "* With projects you can create quick links between conversations, files and other items",
////		 "messageParameters": null,
////		 "systemMessage": ""
////	   }
////	 },
////	 {
////	   "id": "3",
////	   "token": "vassc49e",
////	   "type": "1",
////	   "name": "admin",
////	   "displayName": "admin",
////	   "objectType": "",
////	   "objectId": "",
////	   "participantType": "1",
////	   "participantInCall": "",
////	   "participantFlags": "0",
////	   "readOnly": "0",
////	   "count": "0",
////	   "hasPassword": "",
////	   "hasCall": "",
////	   "lastActivity": "1566891828",
////	   "unreadMessages": "0",
////	   "unreadMention": "",
////	   "isFavorite": "",
////	   "notificationLevel": "1",
////	   "lastPing": "1566891822",
////	   "sessionId": "0",
////	   "participants": [
////		 {
////		   "pieroprocida": {
////			 "name": "Piero Procida",
////			 "type": "1",
////			 "call": "0",
////			 "sessionId": "0"
////		   },
////		   "admin": {
////			 "name": "admin",
////			 "type": "1",
////			 "call": "0",
////			 "sessionId": "0"
////		   }
////		 }
////	   ],
////	   "numGuests": "0",
////	   "guestList": "",
////	   "lastMessage": {
////		 "id": "79",
////		 "actorType": "users",
////		 "actorId": "pieroprocida",
////		 "actorDisplayName": "Piero Procida",
////		 "timestamp": "1566891828",
////		 "message": "Hai abbandonato la chiamata",
////		 "messageParameters": {
////		   "actor": {
////			 "type": "user",
////			 "id": "pieroprocida",
////			 "name": "Piero Procida"
////		   }
////		 },
////		 "systemMessage": "call_left"
////	   }
////	 },
////	 {
////	   "id": "4",
////	   "token": "upf7gnz6",
////	   "type": "1",
////	   "name": "Projobs",
////	   "displayName": "Projobs",
////	   "objectType": "",
////	   "objectId": "",
////	   "participantType": "1",
////	   "participantInCall": "",
////	   "participantFlags": "0",
////	   "readOnly": "0",
////	   "count": "0",
////	   "hasPassword": "",
////	   "hasCall": "",
////	   "lastActivity": "1566897402",
////	   "unreadMessages": "2",
////	   "unreadMention": "",
////	   "isFavorite": "",
////	   "notificationLevel": "1",
////	   "lastPing": "1566893094",
////	   "sessionId": "0",
////	   "participants": [
////		 {
////		   "Projobs": {
////			 "name": "Projobs",
////			 "type": "1",
////			 "call": "0",
////			 "sessionId": "0"
////		   },
////		   "pieroprocida": {
////			 "name": "Piero Procida",
////			 "type": "1",
////			 "call": "0",
////			 "sessionId": "0"
////		   }
////		 }
////	   ],
////	   "numGuests": "0",
////	   "guestList": "",
////	   "lastMessage": {
////		 "id": "84",
////		 "actorType": "users",
////		 "actorId": "pieroprocida",
////		 "actorDisplayName": "Piero Procida",
////		 "timestamp": "1566897402",
////		 "message": "messaggio dai test api NON LETTO?",
////		 "messageParameters": null,
////		 "systemMessage": ""
////	   }
////	 }
////   ]
//// }
////}
////}
////)EOD";

////	rapidjson::Document json;
////	json.Parse(bo);

////	auto x1 = json["ocs"]["data"]["element"][0]["participants"].GetArray();
////	for(auto&& cani : x1){
////		auto down = cani.GetObject().begin();
////		auto nameObjInutile = down->name.GetString();
////		for(auto&& gg : down->value.GetObject()){
////			qDebug() << gg.name.GetString() << " vale " << gg.value.GetString();
////		}
////		//auto nameInterno = down->value["name"].GetString();

////		//qDebug() << nameInterno;

////	}

////}

////void rapidAssert(bool condition) {
////	if (condition == false) {
////		qDebug().noquote() << "cry";
////		throw 3;
////	}
////}

//#include "gumbo-parser/src/gumbo.h"
//#include "p1.h"
//#include "p2.h"
//#include <QCoreApplication>
//#include <QDebug>
//#include <QFile>
//#include <gumbo_libxml.h>
//#include <iostream>
//#include <memory>

//#include "libxml/tree.h"
//#include "libxml/xpath.h"

//#include <thread>
//#include <unistd.h>
//#include <mutex>

//static void
//print_element_names(xmlNode* a_node) {
//	xmlNode* cur_node = NULL;

//	for (cur_node = a_node; cur_node; cur_node = cur_node->next) {
//		if (cur_node->type == XML_ELEMENT_NODE) {
//			auto txt = xmlNodeGetContent(cur_node);
//			printf("name: %s   content: %s \n", cur_node->name, txt);
//		}

//		print_element_names(cur_node->children);
//	}
//}
///**
// * print_xpath_nodes:
// * @nodes:		the nodes set.
// * @output:		the output file handle.
// *
// * Prints the @nodes content to @output.
// */
//void print_xpath_nodes(xmlNodeSetPtr nodes, FILE* output = stdout) {
//	xmlNodePtr cur;
//	int        size;
//	int        i;

//	assert(output);
//	size = (nodes) ? nodes->nodeNr : 0;

//	fprintf(output, "Result (%d nodes):\n", size);
//	for (i = 0; i < size; ++i) {
//		assert(nodes->nodeTab[i]);
//		auto curNode = nodes->nodeTab[i];
//		print_element_names(curNode);
//	}
//}

//static void delete_nodes(xmlDocPtr doc, const char* xpath_expr) {
//	xmlXPathContextPtr xpath_ctx = xmlXPathNewContext(doc);
//	if (xpath_ctx == NULL) {
//		fprintf(stderr, "Error: unable to create new XPath context.\n");
//		return;
//	}
//	xmlXPathObjectPtr xpath_obj = xmlXPathEvalExpression((xmlChar*)xpath_expr, xpath_ctx);
//	if (xpath_obj == NULL) {
//		fprintf(stderr, "Error: unable to create new XPath context.\n");
//		xmlXPathFreeContext(xpath_ctx);
//		return;
//	}

//	// It's often tricky to combine mutations and XPath in the same pass, because
//	// XPath may select descendant nodes that are eliminated by the mutation.  For
//	// this reason, you may want to iterate in reverse document order so that
//	// children are mutated before they're thrown away.  In this particular
//	// example, it doesn't matter since all the tags we scrub don't have children,
//	// but see the note in:
//	// http://www.xmlsoft.org/examples/xpath2.c
//	for (int i = xpath_obj->nodesetval->nodeNr - 1; i >= 0; i--) {
//		xmlNodePtr node = xpath_obj->nodesetval->nodeTab[i];
//		xmlUnlinkNode(node);
//		xmlFreeNode(node);
//	}

//	xmlXPathFreeObject(xpath_obj);
//	xmlXPathFreeContext(xpath_ctx);
//}

//void getInfo(xmlDocPtr doc) {
//	xmlXPathContextPtr xpath_ctx = xmlXPathNewContext(doc);
//	xmlXPathObjectPtr  xpathObj  = xmlXPathEvalExpression((xmlChar*)"//*[@id='field-table']/tbody/tr", xpath_ctx);
//	auto               nodes     = xpathObj->nodesetval;
//	for (int var = 1; var <= nodes->nodeNr; ++var) {
//		auto v1 = QString("//*[@id='field-table']/tbody/tr[%1]/th").arg(var).toUtf8();
//		auto v = v1.constData();
//		auto ptr = xmlXPathEvalExpression((xmlChar*) v, xpath_ctx)->nodesetval;
//		auto vv = xmlNodeGetContent(ptr->nodeTab[0]);
//		printf("%s \n",vv);
//	}
//	//print_xpath_nodes(, stdout);
//}

//void mario(int id){
//	static std::mutex mutex;
//	mutex.lock();
//	qDebug() << id;
//	usleep(1000000);
//	mutex.unlock();
//}

//int main() {

////	for(int i = 0; i < 100; i++){
////		new std::thread(mario, i);
////	}

////usleep(100000000);

//	int              x = 0;
//	QCoreApplication a(x, nullptr);
//	QFile            cached;
//	cached.setFileName("cached.html");
//	if (!cached.open(QIODevice::ReadOnly)) {
//		qCritical() << "e che diamine";
//	}
//	QByteArray pay = cached.readAll();

//	xmlDocPtr doc = gumbo_libxml_parse(pay.constData());

//	//delete_nodes(doc, "//link");
//	getInfo(doc);

//	return 0;
//}

////#include <QDebug>
////#include <vector>
////void miao(int& b){
////	b = 11;
////}
////void miao2(int* b){
////	if(b){
////		qDebug() << b;
////	}else{
////		qDebug() << "null";
////	}
////}

////struct x0 {
////	x0() = delete;
////	x0(int x1){
////		x = x1;
////	}
////	int x;
////};

////struct m{
////	m(){
////		x = x0(4);
////	}
////	x0 x = x0(4);
////};

////#include <QElapsedTimer>
////int main(){
////	QElapsedTimer timer;
////	timer.start();
////	std::vector<uint> mappa;
////	mappa.reserve(100000000);
////	for(uint i = 0; i < 100000000; i++){
////		mappa.push_back(i);
////	}
////	qDebug() << timer.nsecsElapsed();

//#include <QByteArrayList>
//#include <QDebug>
//int main(){
//	QByteArrayList res;
//	char lista[6] = {'a','b','c','d','e','f'};
//	int size = sizeof(lista);
//	int max = (1 << size) -1;
//	for(int i = 3; i < max; i++){
//		QByteArray v;
//		for(int j = 0; j <= size; j++){
//			int mask = 1 << j;
//			if( (i & mask) != 0){
//				v.append(lista[j]);
//			}
//		}
//		if(v.size() > 1){
//			res.append(v);
//		}
//	}
//	qDebug() << res;

//}
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <random>
#include <string>

class ClampedNormal {
      public:
	ClampedNormal(double min, double max, double mean, double stddev) {
		d         = std::normal_distribution<>{mean, stddev};
		this->min = min;
		this->max = max;
	}
	double gen() {
		while (true) {
			double rand = d(rd);
			if (rand <= max && rand >= min) {
				return rand;
			}
		}
	}
	std::random_device         rd{};
	std::mt19937               generator{rd()};
	std::normal_distribution<> d;
	double                     min, max;
};

int main() {

	std::map<double, int> hist{};
	for (int n = 0; n < 10000; ++n) {
		ClampedNormal seq(0.4, 0.5, 0.45, 0.025);
		int           nDummy = (int)(seq.gen() * 100.0);
		auto          v      = ((double)nDummy) / 100.0;
		++hist[v];
	}
	for (auto p : hist) {
		std::cout << std::setw(2)
		          << p.first << ' ' << std::string(p.second / 200, '*') << '\n';
	}
}
