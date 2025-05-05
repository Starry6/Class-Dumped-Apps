@interface GEOConfigStorageCFPrefsReadWrite : GEOConfigStorageCFPrefsReadOnly
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setConfigValue:forKey:options:synchronous:;
@end
