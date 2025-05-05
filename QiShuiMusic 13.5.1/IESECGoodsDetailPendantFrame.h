@interface IESECGoodsDetailPendantFrame : MTLModel
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) Q direction;
@property (nonatomic) Q alignType;
@property (nonatomic) NSNumber verticalOffset;
@property (nonatomic) NSNumber horizontalOffset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)alignType;
- (void)setAlignType:;
- (unsigned long long)direction;
- (void)setDirection:;
- (void)setWidth:;
- (id)horizontalOffset;
- (id)height;
- (id)width;
- (void)setHorizontalOffset:;
- (void)setHeight:;
- (void).cxx_destruct;
- (id)verticalOffset;
- (void)setVerticalOffset:;
+ (id)JSONKeyPathsByPropertyKey;
@end
