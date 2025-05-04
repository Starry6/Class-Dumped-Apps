@interface AWEPublishPrivacyTableViewCellViewModel : NSObject
@property (nonatomic) Q type;
@property (nonatomic) AFDPrivacyPublishParamsModel paramsModel;
@property (nonatomic) q userTotalCount;
@property (nonatomic) @? editBlock;
- (id)paramsModel;
- (void)setParamsModel:;
- (id)editBlock;
- (void)setEditBlock:;
- (id)introText;
- (long long)userTotalCount;
- (void)updateXiguaPrivacyWithCellType:;
- (void)setUserTotalCount:;
- (id)exclusionTitle;
- (id)closeFriendsTitle;
- (id)mateAndDontShareTitle;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)initWithType:;
- (id)contentTitle;
- (BOOL)shouldShowEditButton;
- (id)visibleTitle;
@end
