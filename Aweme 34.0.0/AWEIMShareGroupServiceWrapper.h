@interface AWEIMShareGroupServiceWrapper : NSProxy
@property (nonatomic) NSObject<AWEIMShareGroupServiceInterface> target;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)target;
- (id)initWithTarget:;
- (void)setTarget:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)methodSignatureForSelector:;
+ (id)sharedInstance;
@end
