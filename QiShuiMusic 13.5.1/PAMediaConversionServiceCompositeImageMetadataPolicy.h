@interface PAMediaConversionServiceCompositeImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
@property (nonatomic) NSArray policies;
- (id)policies;
- (id)initWithCoder:;
- (void)setPolicies:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)processMetadata:;
- (BOOL)metadataNeedsProcessing:;
+ (BOOL)supportsSecureCoding;
+ (id)policyWithPolicies:;
@end
