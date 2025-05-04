@interface AWEECOMIMFootDescActionItemButton : DUXBaseButton
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) AWEECOMIMFootDescActionItemUIModel itemModel;
- (id)itemModel;
- (void)updateWithItemModel:;
- (id)textLabel;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setTextLabel:;
@end
