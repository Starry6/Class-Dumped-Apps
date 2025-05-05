@interface UINib : NSObject
- (void)dealloc;
- (void)didReceiveMemoryWarning:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithContentsOfFile:;
- (void).cxx_destruct;
- (id)initWithBundle:;
- (id)effectiveBundle;
- (id)identifierForStringsFile;
- (void)setIdentifierForStringsFile:;
- (BOOL)instantiatingForSimulator;
- (void)setInstantiatingForSimulator:;
- (BOOL)captureImplicitLoadingContextOnDecode;
- (void)setCaptureImplicitLoadingContextOnDecode:;
- (id)initWithData:bundle:;
- (id)initWithNibName:directory:bundle:;
- (void)_registerForMemoryWarningIfNeeded;
- (BOOL)captureEnclosingNIBBundleOnDecode;
- (void)setCaptureEnclosingNIBBundleOnDecode:;
- (id)bundleResourcePath;
- (id)nibDataForPath:;
- (id)lazyArchiveData;
- (id)unarchiverForInstantiatingReturningError:;
- (id)instantiateWithOwner:options:;
+ (id)nibWithNibName:bundle:;
+ (id)nibWithData:bundle:;
@end
