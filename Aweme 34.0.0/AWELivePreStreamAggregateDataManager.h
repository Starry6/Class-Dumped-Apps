@interface AWELivePreStreamAggregateDataManager : NSObject
@property (nonatomic) NSMutableArray dataArray;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL hasFirstRequest;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (void)updateAggregateDataWithNeedReplaceModel:;
- (BOOL)hasFirstRequest;
- (void)p_fetchAggregateDataWithPullType:;
- (void)setHasFirstRequest:;
- (BOOL)p_isNeedFetchAggregateData;
- (BOOL)p_isCurrentRoomListContainOfRoomID:;
- (void)loadMoreAggregateData;
- (void)enterLiveFinishWithNeedReplaceModel:;
- (id)p_filterItems:;
- (void).cxx_destruct;
- (id)dataArray;
- (void)setDataArray:;
- (void)refreshAggregateData;
+ (id)shareInstance;
@end
