@interface PAMediaConversionServiceSetCreationDateImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSTimeZone timeZone;
- (void)setTimeZone:;
- (void)setCreationDate:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)timeZone;
- (id)creationDate;
- (id)processMetadata:;
- (BOOL)metadataNeedsProcessing:;
+ (BOOL)supportsSecureCoding;
+ (id)policyWithCreationDate:inTimeZone:;
@end
