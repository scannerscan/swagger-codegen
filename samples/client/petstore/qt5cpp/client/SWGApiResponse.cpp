/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include "SWGApiResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGApiResponse::SWGApiResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGApiResponse::SWGApiResponse() {
    init();
}

SWGApiResponse::~SWGApiResponse() {
    this->cleanup();
}

void
SWGApiResponse::init() {
    code = 0;
    type = new QString("");
    message = new QString("");
}

void
SWGApiResponse::cleanup() {
    

    if(type != nullptr) {
        delete type;
    }

    if(message != nullptr) {
        delete message;
    }
}

SWGApiResponse*
SWGApiResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGApiResponse::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&code, pJson["code"], "qint32", "");
    ::Swagger::setValue(&type, pJson["type"], "QString", "QString");
    ::Swagger::setValue(&message, pJson["message"], "QString", "QString");
}

QString
SWGApiResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGApiResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("code", QJsonValue(code));

    toJsonValue(QString("type"), type, obj, QString("QString"));

    toJsonValue(QString("message"), message, obj, QString("QString"));

    return obj;
}

qint32
SWGApiResponse::getCode() {
    return code;
}
void
SWGApiResponse::setCode(qint32 code) {
    this->code = code;
}

QString*
SWGApiResponse::getType() {
    return type;
}
void
SWGApiResponse::setType(QString* type) {
    this->type = type;
}

QString*
SWGApiResponse::getMessage() {
    return message;
}
void
SWGApiResponse::setMessage(QString* message) {
    this->message = message;
}



} /* namespace Swagger */

