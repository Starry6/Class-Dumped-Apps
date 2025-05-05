@interface TIAnalyticsMetricsContext : NSObject
@property (nonatomic) NSString inputLanguage;
@property (nonatomic) NSString inputRegion;
@property (nonatomic) NSString inputLanguageAndRegion;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)inputLanguage;
- (id)initWithInputLanguage:inputRegion:;
- (id)inputLanguageAndRegion;
- (id)inputRegion;
+ (BOOL)supportsSecureCoding;
@end
