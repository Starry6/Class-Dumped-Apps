@interface AASigningSession : NSObject
@property (nonatomic) NSInteger error;
- (void)dealloc;
- (int)error;
- (void).cxx_destruct;
- (id)initWithCertURL:sessionURL:;
- (void)establishSession;
- (id)signatureForData:;
+ (id)establishedSessionWithCertURL:sessionURL:error:;
+ (id)_badURLError;
@end
