@interface BDCertActionBinder : NSObject
- (id)SDKEntryToActionTypesDict;
- (id)findBasicInfoByCert:;
- (void)fixEntryActionTypes:;
- (id)getEntryActionTypesByDataType:entryToken:;
- (id)ignoredCertDataTypes;
+ (id)sharedBinder;
@end
