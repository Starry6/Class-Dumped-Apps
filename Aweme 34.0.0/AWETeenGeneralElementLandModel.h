@interface AWETeenGeneralElementLandModel : AWEBaseApiModel
@property (nonatomic) q landType;
@property (nonatomic) NSString value;
@property (nonatomic) NSString schema;
- (void)setLandType:;
- (long long)landType;
- (id)schema;
- (id)value;
- (void)setSchema:;
- (void)setValue:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
