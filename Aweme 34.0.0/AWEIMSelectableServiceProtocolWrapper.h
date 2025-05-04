@interface AWEIMSelectableServiceProtocolWrapper : NSProxy
@property (nonatomic) NSObject<AWEIMSelectableServiceProtocol> target;
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
