@interface PAMediaConversionServiceSetLocationImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
@property (nonatomic) CLLocation location;
- (id)initWithCoder:;
- (id)location;
- (void)encodeWithCoder:;
- (void)setLocation:;
- (void).cxx_destruct;
- (id)processMetadata:;
- (BOOL)metadataNeedsProcessing:;
+ (BOOL)supportsSecureCoding;
+ (id)policyWithLocation:;
@end
