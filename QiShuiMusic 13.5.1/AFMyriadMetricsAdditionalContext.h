@interface AFMyriadMetricsAdditionalContext : NSObject
@property (nonatomic) C rawGoodnessScore;
@property (nonatomic) C goodnessScore;
@property (nonatomic) C deviceClass;
@property (nonatomic) C deviceProductType;
- (unsigned char)deviceClass;
- (unsigned char)deviceProductType;
- (id)description;
- (id)initWithRawGoodnessScore:goodnessScore:deviceClass:deviceProductType:;
- (unsigned char)rawGoodnessScore;
- (unsigned char)goodnessScore;
@end
