@interface IESECRadiusConfig : MTLModel
@property (nonatomic) double topLeft;
@property (nonatomic) double topRight;
@property (nonatomic) double bottomLeft;
@property (nonatomic) double bottomRight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)topLeft;
- (double)topRight;
- (double)bottomLeft;
- (double)bottomRight;
- (void)setTopLeft:;
- (void)setTopRight:;
- (void)setBottomRight:;
- (void)setBottomLeft:;
+ (id)JSONKeyPathsByPropertyKey;
@end
