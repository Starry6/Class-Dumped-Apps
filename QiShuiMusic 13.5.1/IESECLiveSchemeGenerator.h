@interface IESECLiveSchemeGenerator : NSObject
+ (id)detailEntranceInfoSchemaDicWithParams:;
+ (id)encodeUrlString:mapDicArr:;
+ (void)insertParams:atSuperParams:valueNeedEncode:;
+ (id)logDataSchemaDicWithParams:;
+ (id)megaObjectFromRaw:;
+ (id)orderEntranceInfoSchemaDicWithParams:;
+ (id)scheme:insertParams:;
+ (id)v3EventsAdditionsSchemaDicWithParams:;
+ (id)valueOfDictionaryKey:andOriginValue:insertParams:valueNeedEncode:;
@end
