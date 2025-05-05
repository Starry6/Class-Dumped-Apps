@interface SCNPrecomputedLightingEnvironment : NSObject
@property (nonatomic) NSData radianceData;
@property (nonatomic) NSData irradianceData;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)radianceData;
- (void)setRadianceData:;
- (id)irradianceData;
- (void)setIrradianceData:;
+ (BOOL)supportsSecureCoding;
@end
