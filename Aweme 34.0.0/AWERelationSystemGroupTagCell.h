@interface AWERelationSystemGroupTagCell : UICollectionViewCell
@property (nonatomic) UIView bgView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) NSNumber currentGroupID;
- (id)currentGroupID;
- (void)configureUI;
- (id)initWithFrame:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)bgView;
- (void)setBgView:;
- (void)setNameLabel:;
- (void)configureWithModel:;
- (void)setCurrentGroupID:;
+ (id)cellSizeWithModel:;
@end
