@interface IESLiveReplyTreeOperateItemView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) @? tapAction;
- (void)didTapOperateItem;
- (id)initWithIconImage:tapAction:;
- (void)updateIconImage:completionBlock:;
- (void).cxx_destruct;
- (id)iconImageView;
- (void)setIconImageView:;
- (void)setupUI;
- (id)tapAction;
- (void)setTapAction:;
@end
