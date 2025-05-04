@interface AWEECFeedGoodsCardManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleGrowGrassInfoWithGrassKey:awemeModel:extra:;
+ (void)getFeedCardRequestWithParams:completion:;
@end
