@interface AWEEcomSearchCartContainerModel : MTLModel
@property (nonatomic) NSString cartSchema;
@property (nonatomic) double locationX;
@property (nonatomic) double locationY;
@property (nonatomic) BOOL showAddToCartAnimation;
@property (nonatomic) double desX;
@property (nonatomic) double desY;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)locationX;
- (double)locationY;
- (void)setLocationX:;
- (void)setLocationY:;
- (id)cartSchema;
- (void)setCartSchema:;
- (BOOL)showAddToCartAnimation;
- (void)setShowAddToCartAnimation:;
- (double)desX;
- (void)setDesX:;
- (double)desY;
- (void)setDesY:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
