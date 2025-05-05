@interface IESECWinSearchSingleColumnCell : UICollectionViewCell
@property (nonatomic) IESECLLView llView;
@property (nonatomic) <IESECWinFlexGoodsCellProtocol> delegate;
- (void)bindObject:;
- (void)clickGoodsSourceView;
- (id)llView;
- (void)setLlView:;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)cellBuilderWithObject:;
@end
