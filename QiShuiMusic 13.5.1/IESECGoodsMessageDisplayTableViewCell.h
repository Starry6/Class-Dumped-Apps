@interface IESECGoodsMessageDisplayTableViewCell : UITableViewCell
@property (nonatomic) UILabel nameLable;
@property (nonatomic) UIImageView avaterImageView;
@property (nonatomic) UILabel messageLable;
@property (nonatomic) IESECGradientView gradientView;
- (id)avaterImageView;
- (void)bindData:;
- (id)caculateCellSize;
- (id)messageLable;
- (id)nameLable;
- (void)setAvaterImageView:;
- (void)setMessageLable:;
- (void)setNameLable:;
- (id)initWithStyle:reuseIdentifier:;
- (void)layoutSubviews;
- (id)gradientView;
- (void).cxx_destruct;
- (void)setGradientView:;
- (unsigned long long)style;
- (void)setupSubviews;
@end
