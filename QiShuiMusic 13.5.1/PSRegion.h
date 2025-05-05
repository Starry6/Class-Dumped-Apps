@interface PSRegion : NSObject
@property (nonatomic) NSString regionName;
@property (nonatomic) NSString regionCode;
- (id)regionCode;
- (void)setRegionCode:;
- (void).cxx_destruct;
- (id)regionName;
- (void)setRegionName:;
+ (id)regionWithName:code:;
@end
