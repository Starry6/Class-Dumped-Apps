@interface PAMediaConversionServiceSetAccessibilityDescriptionImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
@property (nonatomic) NSString accessibilityDescription;
- (id)accessibilityDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setAccessibilityDescription:;
- (id)processMetadata:;
- (BOOL)metadataNeedsProcessing:;
+ (BOOL)supportsSecureCoding;
+ (id)policyWithAccessibilityDescription:;
@end
