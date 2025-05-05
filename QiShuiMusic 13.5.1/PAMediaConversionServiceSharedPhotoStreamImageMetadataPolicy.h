@interface PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy : PAMediaConversionServiceDefaultImageMetadataPolicy
- (id)processMetadata:;
- (BOOL)metadataNeedsProcessing:;
+ (BOOL)supportsSecureCoding;
+ (id)policyWithAllowLocation:;
+ (void)_filterImageProperties:metadataWithKey:preserveProperties:;
@end
