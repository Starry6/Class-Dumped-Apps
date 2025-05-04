@interface AWEDiscoverDPlayletBottomButtonView : UIView
@property (nonatomic) BDImageView iconImage;
@property (nonatomic) UILabel iconLabel;
@property (nonatomic) BOOL isShrink;
@property (nonatomic) AWEAwemeModel model;
- (void)configureUI;
- (BOOL)isShrink;
- (void)shrink;
- (void)updateUIWithModel:showButtonLabel:;
- (id)getBottomButtonUriWithModel:;
- (id)getBottomButtonLabelWithModel:;
- (void)shrinkIconLabelIfNeeded;
- (void)setIsShrink:;
- (void)setModel:;
- (id)iconImage;
- (void)setIconImage:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (id)iconLabel;
- (void)setIconLabel:;
+ (BOOL)shouldShowVipCardPersistentButtonWithCurrentModel:;
+ (BOOL)shouldShowBottomButtonWithModel:;
@end
