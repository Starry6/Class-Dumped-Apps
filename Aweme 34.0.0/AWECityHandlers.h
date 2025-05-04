@interface AWECityHandlers : NSObject
@property (nonatomic) NSDictionary cityHandlers;
- (void)initHandles;
- (void)setCityHandlers:;
- (id)cityHandlers;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)nearbyHandle;
+ (id)handleWithPageType:;
+ (id)handleWithPageType:channelPageType:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
