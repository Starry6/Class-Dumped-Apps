@interface PAMediaConversionServiceDefaultImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
@property (nonatomic) float lossyCompressionQuality;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)processMetadata:;
- (BOOL)metadataNeedsProcessing:;
- (id)initWithLossyCompressionQuality:;
- (float)lossyCompressionQuality;
- (void)setLossyCompressionQuality:;
+ (BOOL)supportsSecureCoding;
+ (id)standardPolicy;
+ (id)policyWithLossyCompressionQuality:;
@end
