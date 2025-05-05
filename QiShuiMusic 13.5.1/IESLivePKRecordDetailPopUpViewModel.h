@interface IESLivePKRecordDetailPopUpViewModel : NSObject
@property (nonatomic) RecordResponse_BattleRecord item;
@property (nonatomic) q followType;
@property (nonatomic) NSInteger recommendStatus;
@property (nonatomic) BOOL isBlock;
@property (nonatomic) HTSLivePKApi pkAPI;
- (int)recommendStatus;
- (void)followRivalAnchor;
- (long long)followType;
- (id)pkAPI;
- (void)setFollowType:;
- (void)setIsBlock:;
- (void)setPkAPI:;
- (void)setRecommendStatus:;
- (void)updateRivalAnchorBlockStatus:;
- (void)updateRivalAnchorPKRecommendStatus:;
- (id)item;
- (BOOL)isBlock;
- (void)setItem:;
- (void).cxx_destruct;
- (id)initWithItem:;
@end
