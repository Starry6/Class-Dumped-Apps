@interface AWENearbyHotSpotTableViewModel : NSObject
@property (nonatomic) AWENearbyHotSpotFeedInitialContext initialContext;
@property (nonatomic) AWENearbyHotSpotFeedDataController dataController;
@property (nonatomic) BOOL isHotRankVersionExpired;
@property (nonatomic) NSString hotRankVersionExpiredMessage;
@property (nonatomic) AWEPOINearbyHotRankPOI currentHotSpotModel;
- (void)setDataController:;
- (id)initialContext;
- (void)configWithParamDict:;
- (BOOL)isSameHotSpotModel:;
- (void)setInitialContext:;
- (BOOL)isHotRankVersionExpired;
- (id)hotRankVersionExpiredMessage;
- (void)setHotRankVersionExpiredMessage:;
- (void)setIsHotRankVersionExpired:;
- (void)setCurrentHotSpotModel:;
- (id)currentHotSpotModel;
- (void).cxx_destruct;
- (id)dataController;
+ (BOOL)hotSpotModel:isSameWith:;
@end
