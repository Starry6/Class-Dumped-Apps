@interface PAMediaConversionServiceAddPFMediaMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
@property (nonatomic) C type;
@property (nonatomic) @ value;
- (void)setType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setValue:;
- (unsigned char)type;
- (void).cxx_destruct;
- (id)value;
- (id)processMetadata:;
- (BOOL)metadataNeedsProcessing:;
+ (BOOL)supportsSecureCoding;
+ (id)policyWithType:value:;
@end
