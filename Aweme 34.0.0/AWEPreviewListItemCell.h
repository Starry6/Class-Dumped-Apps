@interface AWEPreviewListItemCell : UICollectionViewCell
@property (nonatomic) UILabel itemContentLabel;
@property (nonatomic) NSString itemContent;
- (id)itemContentLabel;
- (void)setItemContent:;
- (id)itemContent;
- (void)setItemContentLabel:;
- (void)removeFromSuperview;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupSubviews;
@end
