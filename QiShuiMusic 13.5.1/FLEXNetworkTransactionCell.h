@interface FLEXNetworkTransactionCell : UITableViewCell
@property (nonatomic) UIImageView thumbnailImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel pathLabel;
@property (nonatomic) UILabel transactionDetailsLabel;
@property (nonatomic) FLEXNetworkTransaction transaction;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTransaction:;
- (void)layoutSubviews;
- (id)nameLabelText;
- (id)pathLabelText;
- (id)transactionDetailsLabelText;
- (id)transaction;
- (id)thumbnailImageView;
- (void)setThumbnailImageView:;
- (id)nameLabel;
- (void)setNameLabel:;
- (id)pathLabel;
- (void)setPathLabel:;
- (id)transactionDetailsLabel;
- (void)setTransactionDetailsLabel:;
- (void).cxx_destruct;
+ (double)preferredCellHeight;
+ (id)reuseID;
@end
