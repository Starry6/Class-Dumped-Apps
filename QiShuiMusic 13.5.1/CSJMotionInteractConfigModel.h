@interface CSJMotionInteractConfigModel : CSJBasicModel
@property (nonatomic) q doubleDirectConf;
@property (nonatomic) q doubleDirectMatch;
- (long long)doubleDirectConf;
- (long long)doubleDirectMatch;
- (void)setDoubleDirectConf:;
- (void)setDoubleDirectMatch:;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (id)modelCustomPropertyMapper;
+ (id)fromDictionary:;
@end
