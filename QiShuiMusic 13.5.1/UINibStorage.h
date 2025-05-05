@interface UINibStorage : NSObject
@property (nonatomic) NSString bundleResourceName;
@property (nonatomic) NSString bundleDirectoryName;
@property (nonatomic) NSBundle bundle;
@property (nonatomic) NSString identifierForStringsFile;
@property (nonatomic) NSData archiveData;
@property (nonatomic) UINibDecoder nibDecoder;
@property (nonatomic) BOOL instantiatingForSimulator;
@property (nonatomic) BOOL captureImplicitLoadingContextOnDecode;
- (id)archiveData;
- (id)bundle;
- (void).cxx_destruct;
- (void)setBundle:;
- (id)bundleResourceName;
- (void)setBundleResourceName:;
- (id)bundleDirectoryName;
- (void)setBundleDirectoryName:;
- (id)identifierForStringsFile;
- (void)setIdentifierForStringsFile:;
- (void)setArchiveData:;
- (id)nibDecoder;
- (void)setNibDecoder:;
- (BOOL)instantiatingForSimulator;
- (void)setInstantiatingForSimulator:;
- (BOOL)captureImplicitLoadingContextOnDecode;
- (void)setCaptureImplicitLoadingContextOnDecode:;
@end
