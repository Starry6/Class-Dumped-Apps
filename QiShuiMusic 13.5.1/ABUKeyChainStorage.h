@interface ABUKeyChainStorage : NSObject
+ (long long)getSDKInitTimestampWithService:;
+ (id)getKeychainService:;
+ (void)saveSDKInitTimestamp:withService:;
@end
