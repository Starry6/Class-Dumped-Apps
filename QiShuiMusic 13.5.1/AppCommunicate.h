@interface AppCommunicate : NSObject
+ (id)appCommunicateDataForAppID:;
+ (id)appCommunicateDataForDic:;
+ (id)appCommunicateDataForString:;
+ (id)getDataPasteboard;
+ (id)getDataPasteboardName;
+ (id)propertyListForAllApp;
+ (id)propertyListForAppID:;
+ (BOOL)setAppCommunicateData:forAppID:canReadPasteBoard:;
+ (BOOL)setPropertyList:forAppID:canReadPasteBoard:;
@end
