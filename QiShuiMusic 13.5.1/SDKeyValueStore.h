@interface SDKeyValueStore : NSObject
+ (void)synchronize;
+ (id)devicesDictionary;
+ (id)deviceDictionaryForDeviceIdentifier:;
+ (void)insertOrUpdateDevice:;
@end
