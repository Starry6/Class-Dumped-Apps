@interface AWEECOMIMMemberInviteCardModel : AWEECOMIMBaseCardModel
@property (nonatomic) AWEECOMIMCardMemberInfoModel memberModel;
- (void)updateModelWithData:encrypted:;
- (void)getCardDataWithCompletion:;
- (void)didSkipButtonClick:;
- (void)setMemberModel:;
- (id)memberModel;
- (void).cxx_destruct;
+ (Class)cardViewClass;
+ (id)primaryBtnNameSet;
@end
