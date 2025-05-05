@interface WFImageSymbolConfiguration : NSObject
@property (nonatomic) Q representationType;
@property (nonatomic) @ platformSymbolConfiguration;
@property (nonatomic) double pointSize;
@property (nonatomic) NSArray hierarchicalColors;
@property (nonatomic) Q weight;
- (double)pointSize;
- (unsigned long long)weight;
- (void)setWeight:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (unsigned long long)representationType;
- (id)initWithPointSize:hierarchicalColors:;
- (id)initWithPlatformSymbolConfiguration:;
- (long long)platformWeight;
- (id)uiKitConfiguration;
- (id)platformHierarchicalColors;
- (id)hierarchicalColors;
- (id)platformSymbolConfiguration;
+ (BOOL)supportsSecureCoding;
+ (id)configurationWithPointSize:;
+ (id)configurationWithPointSize:hierarchicalColors:;
+ (id)configurationWithUIImageSymbolConfiguration:;
+ (id)configurationWithNSImageSymbolConfiguration:;
@end
