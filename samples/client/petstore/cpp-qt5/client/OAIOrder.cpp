/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "OAIOrder.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIOrder::OAIOrder(QString json) {
    init();
    this->fromJson(json);
}

OAIOrder::OAIOrder() {
    init();
}

OAIOrder::~OAIOrder() {
    this->cleanup();
}

void
OAIOrder::init() {
    id = 0L;
    m_id_isSet = false;
    pet_id = 0L;
    m_pet_id_isSet = false;
    quantity = 0;
    m_quantity_isSet = false;
    ship_date = NULL;
    m_ship_date_isSet = false;
    status = new QString("");
    m_status_isSet = false;
    complete = false;
    m_complete_isSet = false;
}

void
OAIOrder::cleanup() {



    if(ship_date != nullptr) { 
        delete ship_date;
    }
    if(status != nullptr) { 
        delete status;
    }

}

OAIOrder*
OAIOrder::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIOrder::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&id, pJson["id"], "qint64", "");
    
    ::OpenAPI::setValue(&pet_id, pJson["petId"], "qint64", "");
    
    ::OpenAPI::setValue(&quantity, pJson["quantity"], "qint32", "");
    
    ::OpenAPI::setValue(&ship_date, pJson["shipDate"], "QDateTime", "QDateTime");
    
    ::OpenAPI::setValue(&status, pJson["status"], "QString", "QString");
    
    ::OpenAPI::setValue(&complete, pJson["complete"], "bool", "");
    
}

QString
OAIOrder::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIOrder::asJsonObject() {
    QJsonObject obj;
    if(m_id_isSet){
        obj.insert("id", QJsonValue(id));
    }
    if(m_pet_id_isSet){
        obj.insert("petId", QJsonValue(pet_id));
    }
    if(m_quantity_isSet){
        obj.insert("quantity", QJsonValue(quantity));
    }
    if(ship_date != nullptr) { 
        toJsonValue(QString("shipDate"), ship_date, obj, QString("QDateTime"));
    }
    if(status != nullptr && *status != QString("")){
        toJsonValue(QString("status"), status, obj, QString("QString"));
    }
    if(m_complete_isSet){
        obj.insert("complete", QJsonValue(complete));
    }

    return obj;
}

qint64
OAIOrder::getId() {
    return id;
}
void
OAIOrder::setId(qint64 id) {
    this->id = id;
    this->m_id_isSet = true;
}

qint64
OAIOrder::getPetId() {
    return pet_id;
}
void
OAIOrder::setPetId(qint64 pet_id) {
    this->pet_id = pet_id;
    this->m_pet_id_isSet = true;
}

qint32
OAIOrder::getQuantity() {
    return quantity;
}
void
OAIOrder::setQuantity(qint32 quantity) {
    this->quantity = quantity;
    this->m_quantity_isSet = true;
}

QDateTime*
OAIOrder::getShipDate() {
    return ship_date;
}
void
OAIOrder::setShipDate(QDateTime* ship_date) {
    this->ship_date = ship_date;
    this->m_ship_date_isSet = true;
}

QString*
OAIOrder::getStatus() {
    return status;
}
void
OAIOrder::setStatus(QString* status) {
    this->status = status;
    this->m_status_isSet = true;
}

bool
OAIOrder::isComplete() {
    return complete;
}
void
OAIOrder::setComplete(bool complete) {
    this->complete = complete;
    this->m_complete_isSet = true;
}


bool
OAIOrder::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_id_isSet){ isObjectUpdated = true; break;}
        if(m_pet_id_isSet){ isObjectUpdated = true; break;}
        if(m_quantity_isSet){ isObjectUpdated = true; break;}
        if(status != nullptr && *status != QString("")){ isObjectUpdated = true; break;}
        if(m_complete_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

