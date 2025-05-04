@interface AWETemplateStaticLabelStyleModel : AWEBaseApiModel
@property (nonatomic) q containerNumber;
@property (nonatomic) q padding;
- (void)setContainerNumber:;
- (long long)containerNumber;
- (long long)padding;
- (void)setPadding:;
+ (id)defaultStyleModel;
+ (id)JSONKeyPathsByPropertyKey;
@end
