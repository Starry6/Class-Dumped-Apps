@interface AWELiveAcqCastVideoMixDataManager : AWEListDataController
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSString userID;
@property (nonatomic) NSMutableArray cellSizeArray;
@property (nonatomic) NSNumber roomID;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)initWithUserID:;
- (id)urlForProfileMix;
- (void)setCellSizeArray:;
- (double)itemWidthWithMixName:;
- (id)cellSizeArray;
- (id)cursor;
- (id)userID;
- (id)roomID;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setRoomID:;
- (id)params;
- (id)copyWithZone:;
- (void)setUserID:;
+ (void)requestMixVideoDetailInfo:completeBlock:;
@end
