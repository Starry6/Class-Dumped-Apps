@interface AWEPayOuterBridgeCallbackWrapper : NSObject
@property (nonatomic) NSString method;
@property (nonatomic) <AWEYAPOuterBridgeProtocol> originalPlugin;
@property (nonatomic) <AWEPayOuterBridgeCallbackWrapperProtocol> wrapperProtocol;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didReceive:withCallback:inViewController:;
- (id)wrapperProtocol;
- (void)setWrapperProtocol:;
- (void)setOriginalPlugin:;
- (id)originalPlugin;
- (unsigned long long)hash;
- (void)setMethod:;
- (void).cxx_destruct;
- (id)method;
- (BOOL)isEqual:;
+ (id)wrapperWithMethod:plugin:;
@end
