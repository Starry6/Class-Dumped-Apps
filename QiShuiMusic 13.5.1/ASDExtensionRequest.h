@interface ASDExtensionRequest : NSObject
@property (nonatomic) @? errorBlock;
@property (nonatomic) NSExtension extension;
- (void)dealloc;
- (id)extension;
- (void).cxx_destruct;
- (id)initWithExtension:queue:serviceTime:graceTime:;
- (id)initWithExtension:queue:;
- (void)beginRequestForHostContext:XPCInterface:executionBlock:;
- (id)beginRequestForHostContext:XPCInterface:;
- (void)endRequest;
- (void)requestEnded;
- (id)errorBlock;
- (void)setErrorBlock:;
@end
