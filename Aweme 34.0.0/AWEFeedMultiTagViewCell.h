@interface AWEFeedMultiTagViewCell : UICollectionViewCell
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) AWEDynamicLabel dynamicLabel;
- (void)setDynamicLabel:;
- (id)initWithFrame:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (void)configureWithModel:;
- (id)dynamicLabel;
+ (id)identifier;
@end
