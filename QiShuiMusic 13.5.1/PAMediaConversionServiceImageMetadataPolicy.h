@interface PAMediaConversionServiceImageMetadataPolicy : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)processMetadata:;
- (BOOL)metadataNeedsProcessing:;
+ (BOOL)supportsSecureCoding;
+ (id)standardPolicy;
@end
