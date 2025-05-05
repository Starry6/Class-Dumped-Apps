@interface IESLivePSActionSheetTopItemView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) @? didClick;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)didClick;
- (void)setDidClick:;
- (void)updateWithItemTitle:iconImage:;
- (id)init;
- (void)setTitleLabel:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)singleTap:;
@end
