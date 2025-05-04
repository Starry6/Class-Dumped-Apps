@interface AWEIMFansGroupCouponMessage : AWEIMMessage
@property (nonatomic) AWEIMFansGroupCouponModel couponModel;
@property (nonatomic) NSDictionary contentDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (id)contentDict;
- (void)setContentDict:;
- (unsigned long long)couponType;
- (void)setCouponModel:;
- (id)couponModel;
- (id)getContentDict;
- (BOOL)isUserCellType;
- (BOOL)supportRefactorCell;
- (id)supportMessageMenuTypeList;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isAllowedCellEdit;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)getContentDictForModel;
- (void).cxx_destruct;
+ (long long)expireTimeFrom:;
@end
