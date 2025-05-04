@interface AWEMixVideoPanelPlayletMoreButtonView : UIView
@property (nonatomic) BDImageView iconImage;
@property (nonatomic) UILabel iconLabel;
@property (nonatomic) BOOL isShrink;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) <AWEMixVideoPanelPlayletMoreButtonViewDelegate> delegate;
- (BOOL)isShrink;
- (void)refreshModel:showButtonLabel:;
- (void)shrinkButtonView;
- (void)onButtonViewClicked;
- (void)updateUIWithModel:showButtonLabel:;
- (id)getBottomButtonUriWithModel:;
- (id)getBottomButtonLabelWithModel:;
- (void)shrinkIconLabelIfNeeded;
- (void)setIsShrink:;
- (void)setModel:;
- (id)iconImage;
- (id)init;
- (id)delegate;
- (void)setIconImage:;
- (id)model;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)iconLabel;
- (void)setIconLabel:;
+ (BOOL)shouldShowBottomButtonWithModel:;
@end
