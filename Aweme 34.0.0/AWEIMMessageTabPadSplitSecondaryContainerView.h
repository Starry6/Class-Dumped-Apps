@interface AWEIMMessageTabPadSplitSecondaryContainerView : UIView
@property (nonatomic) UIView seporatorLine;
@property (nonatomic) UIView secondaryView;
@property (nonatomic) UIImageView iconView;
- (void)p_setupSubviews;
- (id)secondarySize;
- (id)p_iconSize;
- (id)seporatorLine;
- (void)addSecondaryView:;
- (void)setSeporatorLine:;
- (id)secondaryView;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setSecondaryView:;
- (void)layoutSubviews;
@end
