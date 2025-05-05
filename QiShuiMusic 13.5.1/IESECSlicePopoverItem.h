@interface IESECSlicePopoverItem : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) <IESECSlicePopoverItemViewDelegate> delegate;
@property (nonatomic) IESECSlicePopoverItemConfiguration configration;
- (id)configration;
- (void)setConfigration:;
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
