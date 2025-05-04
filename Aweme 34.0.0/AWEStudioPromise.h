@interface AWEStudioPromise : NSObject
@property (nonatomic) @? promise;
@property (nonatomic) @? pthen;
@property (nonatomic) @? pexec;
- (id)retry:;
- (id)pthen;
- (id)pexec;
- (id)retryWith:;
- (void)execute:completion:;
- (void)setPromise:;
- (id)then:;
- (void).cxx_destruct;
- (id)promise;
- (id)initWithPromise:;
+ (id)promise:retry:;
+ (id)promise:retryWith:;
@end
