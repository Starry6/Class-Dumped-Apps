@interface PAMediaConversionServiceSetCaptionImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
@property (nonatomic) NSString caption;
- (id)caption;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setCaption:;
- (void).cxx_destruct;
- (id)processMetadata:;
- (BOOL)metadataNeedsProcessing:;
+ (BOOL)supportsSecureCoding;
+ (id)policyWithCaption:;
@end
