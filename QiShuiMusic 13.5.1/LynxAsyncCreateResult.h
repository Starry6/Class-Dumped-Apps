@interface LynxAsyncCreateResult : NSObject
@property (nonatomic) <LynxServiceContainerProtocol> container;
@property (nonatomic) NSString identify;
@property (nonatomic) q resultCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setContainer:;
- (long long)resultCode;
- (id)container;
- (void)setResultCode:;
- (void).cxx_destruct;
- (id)identify;
- (void)setIdentify:;
+ (id)defaultErrorResult:;
@end
