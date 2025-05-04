@interface AWERegionServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getCurrentRegion;
- (BOOL)isCurrentRegionInRegions:;
- (BOOL)isCurrentRegionEqualToRegion:;
+ (id)sharedInstance;
@end
