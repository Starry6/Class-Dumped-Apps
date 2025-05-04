@interface AWEECCommodityLandingTitleCell : UICollectionViewCell
@property (nonatomic) <AWEECCommodityLandingCollectButtonProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)p_builderWithModel:;
- (void)collectButtonClick:;
- (void)updateWithHeaderModel:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
+ (BOOL)canCollectDescAndCategorySingleLineWithModel:;
+ (double)cellHeightWithModel:;
@end
