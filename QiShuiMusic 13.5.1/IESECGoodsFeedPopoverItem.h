@interface IESECGoodsFeedPopoverItem : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIImageView iconImageView2;
@property (nonatomic) <IESECGoodsFeedPopoverItemDelegate> delegate;
@property (nonatomic) IESECGoodsFeedPopoverItemConfiguration configration;
- (id)configration;
- (id)iconImageView2;
- (void)setConfigration:;
- (void)setIconImageView2:;
- (void)setTitleLabel:;
- (id)initWithConfig:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)iconImageView;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)tapAction;
@end
