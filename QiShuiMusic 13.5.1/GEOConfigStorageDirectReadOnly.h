@interface GEOConfigStorageDirectReadOnly : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getConfigValueForKey:countryCode:options:source:;
- (id)initWithPath:forSource:;
- (void)resync;
- (void).cxx_destruct;
@end
