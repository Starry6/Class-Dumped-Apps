@interface MXAppExitMetric : MXMetric
@property (nonatomic) MXForegroundExitData foregroundExitData;
@property (nonatomic) MXBackgroundExitData backgroundExitData;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithForegroundExitData:backgroundExitData:;
- (id)foregroundExitData;
- (id)backgroundExitData;
+ (BOOL)supportsSecureCoding;
@end
