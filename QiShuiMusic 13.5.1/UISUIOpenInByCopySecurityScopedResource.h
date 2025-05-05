@interface UISUIOpenInByCopySecurityScopedResource : UISUISecurityScopedResource
@property (nonatomic) NSString bookmarkExportDataEncodedAsString;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)bookmarkExportDataEncodedAsString;
- (void)setBookmarkExportDataEncodedAsString:;
+ (BOOL)supportsSecureCoding;
@end
