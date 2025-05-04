@interface AWEIMTransferMoneyGroupView : AWEIMLeftIconRightVerticalTextsView
@property (nonatomic) BOOL needFold;
@property (nonatomic) BOOL isThirdUser;
@property (nonatomic) MASConstraint nameSuffixRightConstraint;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel nameSuffixLabel;
- (void)p_setupUI;
- (BOOL)needFold;
- (void)setNeedFold:;
- (void)configWithModel:;
- (BOOL)isThirdUser;
- (void)setIsThirdUser:;
- (id)nameSuffixLabel;
- (void)setNameSuffixRightConstraint:;
- (id)nameSuffixRightConstraint;
- (void)setNameSuffixLabel:;
- (id)init;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
@end
