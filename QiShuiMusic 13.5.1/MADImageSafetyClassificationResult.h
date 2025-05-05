@interface MADImageSafetyClassificationResult : MADResult
@property (nonatomic) BOOL isSensitive;
@property (nonatomic) NSDictionary attributes;
- (id)initWithCoder:;
- (id)attributes;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isSensitive;
- (id)initWithIsSensitive:andAttributes:;
+ (BOOL)supportsSecureCoding;
@end
