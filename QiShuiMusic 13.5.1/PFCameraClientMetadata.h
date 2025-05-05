@interface PFCameraClientMetadata : NSObject
@property (nonatomic) AVCapturePhotoPrivateClientMetadata privateClientMetadata;
@property (nonatomic) NSArray contactIDsInProximity;
@property (nonatomic) q sharedLibraryMode;
@property (nonatomic) NSDictionary sharedLibraryDiagnostics;
- (void)setSharedLibraryMode:;
- (void)setSharedLibraryDiagnostics:;
- (id)sharedLibraryDiagnostics;
- (id)initWithCoder:;
- (void)setPrivateClientMetadata:;
- (void)encodeWithCoder:;
- (id)contactIDsInProximity;
- (void).cxx_destruct;
- (long long)sharedLibraryMode;
- (id)initWithPrivateClientMetadata:contactIDsInProximity:sharedLibraryMode:;
- (void)setContactIDsInProximity:;
- (id)privateClientMetadata;
+ (BOOL)supportsSecureCoding;
@end
