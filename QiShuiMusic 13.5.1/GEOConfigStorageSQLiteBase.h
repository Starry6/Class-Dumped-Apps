@interface GEOConfigStorageSQLiteBase : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getConfigValueForKey:countryCode:options:source:;
- (void)setConfigValue:forKey:options:synchronous:;
- (void)_instanceSpecificSetValue:forKey:;
- (void)resync;
- (void).cxx_destruct;
- (id)_instanceSpecificGetKey:;
- (id)_instanceSpecificGetKeyPath:;
@end
