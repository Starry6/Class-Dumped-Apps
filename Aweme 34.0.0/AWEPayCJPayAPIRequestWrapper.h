@interface AWEPayCJPayAPIRequestWrapper : NSObject
@property (nonatomic) NSString identify;
@property (nonatomic) <AWEYAPAPIDelegateProtocol> originalDelegate;
@property (nonatomic) <AWEPayCJPayAPIWrapperProtocol> wrapperProtocol;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)callState:fromScene:;
- (void)onResponse:;
- (void)callState:fromScene:params:;
- (id)wrapperProtocol;
- (void)setWrapperProtocol:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)identify;
- (void)setIdentify:;
- (id)originalDelegate;
- (void)setOriginalDelegate:;
+ (id)wrapperWithID:apiDelegate:;
@end
