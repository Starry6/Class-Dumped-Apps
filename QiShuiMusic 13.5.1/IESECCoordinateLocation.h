@interface IESECCoordinateLocation : MTLModel
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setX:;
- (void)setY:;
- (double)y;
- (double)x;
+ (id)JSONKeyPathsByPropertyKey;
@end
