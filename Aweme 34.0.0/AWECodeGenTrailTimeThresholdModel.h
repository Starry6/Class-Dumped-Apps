@interface AWECodeGenTrailTimeThresholdModel : AWEBaseDataModel
@property (nonatomic) q type;
@property (nonatomic) NSInteger value;
- (int)value;
- (void)setValue:;
- (long long)type;
- (void)setType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
