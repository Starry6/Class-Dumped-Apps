@interface AWEPlayVideoTrackParamsModel : NSObject
@property (nonatomic) NSDictionary trackedEventParams;
@property (nonatomic) NSDictionary defaultParams;
@property (nonatomic) NSDictionary playerExtraParams;
- (id)defaultParams;
- (void)setDefaultParams:;
- (void)recordTrackedEvent:params:;
- (id)playerExtraParams;
- (void)setPlayerExtraParams:;
- (id)trackedEventParams;
- (void)setTrackedEventParams:;
- (void).cxx_destruct;
@end
