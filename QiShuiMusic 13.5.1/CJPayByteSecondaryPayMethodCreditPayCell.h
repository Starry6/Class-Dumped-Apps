@interface CJPayByteSecondaryPayMethodCreditPayCell : CJPayBytePayMethodSecondaryCell
@property (nonatomic) CJPayBytePayMethodCreditPayCollectionView collectionView;
@property (nonatomic) NSArray<CJPayBytePayCreditPayMethodModel> creditPayMethods;
@property (nonatomic) @? clickBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)clickBlock;
- (id)creditPayMethods;
- (void)setClickBlock:;
- (void)setCreditPayMethods:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setupUI;
- (void)updateContent:;
+ (id)calHeight:;
@end
