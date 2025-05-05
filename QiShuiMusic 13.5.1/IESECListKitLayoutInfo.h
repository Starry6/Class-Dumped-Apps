@interface IESECListKitLayoutInfo : MTLModel
@property (nonatomic) NSNumber top;
@property (nonatomic) NSNumber right;
@property (nonatomic) NSNumber bottom;
@property (nonatomic) NSNumber left;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)top;
- (void)setTop:;
- (void)setWidth:;
- (id)left;
- (id)height;
- (id)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (id)bottom;
- (id)right;
- (void)setBottom:;
- (void)setLeft:;
- (void)setRight:;
+ (id)JSONKeyPathsByPropertyKey;
@end
