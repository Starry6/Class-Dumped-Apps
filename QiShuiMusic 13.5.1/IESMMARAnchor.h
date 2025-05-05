@interface IESMMARAnchor : NSObject
@property (nonatomic) ARAnchor arAnchor;
@property (nonatomic) NSString name;
@property (nonatomic) NSUUID identifier;
@property (nonatomic) {?=[4]} transform;
- (id)arAnchor;
- (id)initWithARAnchor:;
- (id)initWithTransform:name:;
- (void)setArAnchor:;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)transform;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)copyWithZone:;
- (id)initWithTransform:;
+ (id)anchorWithARAnchor:;
+ (BOOL)supportsSecureCoding;
@end
