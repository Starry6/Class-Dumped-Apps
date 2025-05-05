@interface GEOConfigStorageClient : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getConfigValueForKey:countryCode:options:source:;
- (void)setConfigValue:forKey:options:synchronous:;
- (id)getAllKeysAndValuesForOptions:;
- (void)setConfigKeyExpiry:options:date:osVersion:;
- (void)getConfigValueForKey:countryCode:options:result:;
- (void)resync;
- (id)_init;
- (void)getExpiringKeys:result:;
+ (id)shared;
@end
