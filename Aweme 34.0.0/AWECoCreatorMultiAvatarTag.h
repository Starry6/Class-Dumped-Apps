@interface AWECoCreatorMultiAvatarTag : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) AWECoCreatorMultiAvatarView multiAvatarView;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) BOOL showMultiAvatarView;
@property (nonatomic) BOOL showIconView;
@property (nonatomic) BOOL forceEnableLargeFontAdapt;
@property (nonatomic) double tagViewHeight;
- (id)tagLabel;
- (void)setTagLabel:;
- (double)tagViewHeight;
- (id)multiAvatarView;
- (BOOL)showMultiAvatarView;
- (void)setMultiAvatarView:;
- (void)setShowMultiAvatarView:;
- (BOOL)forceEnableLargeFontAdapt;
- (BOOL)showIconView;
- (void)configTagViewWithAvatars:text:;
- (void)setShowIconView:;
- (void)setForceEnableLargeFontAdapt:;
- (void)setTagViewHeight:;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateCornerRadius;
@end
