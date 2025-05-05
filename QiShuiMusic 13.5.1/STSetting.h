@interface STSetting : STSiriModelObject
@property (nonatomic) q type;
@property (nonatomic) @ value;
- (void)setType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setValue:;
- (long long)type;
- (void).cxx_destruct;
- (id)value;
+ (BOOL)supportsSecureCoding;
@end
