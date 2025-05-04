@interface AWEEcomSearchApiUpgradeAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)shopSearchAggregateShoppingUrlPathForChannel:enterFrom:;
+ (id)convertResponseIfNeeded:;
+ (Class)responseModelClassForChannel:enterFrom:;
+ (id)shopSearchAggregateShoppingChunkUrlPathForChannel:enterFrom:;
+ (id)chunkInfoWithResponseJson:;
+ (Class)responseModelClassWithResponseJson:;
+ (BOOL)enableApiUpgradeForChannel:enterFrom:;
+ (id)apiUpgradeChannels;
+ (id)apiUpgradeEnterFroms;
+ (BOOL)enableApiUpgradeForChannel:;
@end
