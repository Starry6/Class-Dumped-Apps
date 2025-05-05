@interface IESMMARModelAnchor : ARAnchor
@property (nonatomic) NSString modelName;
- (id)initWithTransform:modelName:;
- (id)modelName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
