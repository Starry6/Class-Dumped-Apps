@interface AWELiveDouPlusDataController : NSObject
@property (nonatomic) AWELiveDouPlusEntryModel douPlusEntryModel;
@property (nonatomic) AWELiveDouPlusCouponPromptsModel douPlusCouponModel;
@property (nonatomic) NSString anchorID;
- (id)anchorID;
- (void)setAnchorID:;
- (id)douPlusEntryModel;
- (void)queryForLiveDouplusEntry:roomID:entranceType:completion:;
- (void)setDouPlusEntryModel:;
- (void)setDouPlusCouponModel:;
- (void)fetchLiveRoomGoodsInfoWithRoomID:anchorID:completion:;
- (void)fetchLiveDouPlusCouponPromptsWithCompletionBlock:;
- (id)douPlusCouponModel;
- (void).cxx_destruct;
@end
