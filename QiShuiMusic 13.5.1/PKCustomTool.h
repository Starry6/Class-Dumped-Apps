@interface PKCustomTool : PKTool
@property (nonatomic) NSString customIdentifier;
@property (nonatomic) PKToolConfiguration customConfigurationCopy;
@property (nonatomic) UIColor color;
@property (nonatomic) double weight;
- (double)weight;
- (id)customIdentifier;
- (unsigned long long)hash;
- (id)color;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)copyWithColor:;
- (id)initWithCustomIdentifier:configuration:color:weight:;
- (id)customConfigurationCopy;
- (id)copyWithScrubbedColor:;
- (id)copyWithWeight:;
- (id)copyWithScrubbedWeight:;
@end
