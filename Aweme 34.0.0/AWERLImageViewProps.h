@interface AWERLImageViewProps : AWERLProps
@property (nonatomic) UIImage image;
@property (nonatomic) NSURL imageUrl;
@property (nonatomic) NSArray imageUrlArray;
@property (nonatomic) @? setImageViewUrlArrayBlock;
- (void)setImageUrlArray:;
- (id)imageUrlArray;
- (void)setSetImageViewUrlArrayBlock:;
- (id)initWithKey:viewClass:viewCreateBlock:viewUpdateBlock:viewLayoutBlock:;
- (id)propertiesSnapshot;
- (id)setImageViewUrlArrayBlock;
- (id)image;
- (void)setImage:;
- (void).cxx_destruct;
- (id)initWithKey:;
- (id)copyWithZone:;
- (id)imageUrl;
- (void)setImageUrl:;
@end
