@interface GEOConfigStorageCFProfile : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getConfigValueForKey:countryCode:options:source:;
- (void)resync;
@end
