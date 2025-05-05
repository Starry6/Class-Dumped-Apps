@interface CJPayAPIRequestMsgWrapper : NSObject
@property (nonatomic) NSString identify;
@property (nonatomic) NSDictionary reqParams;
@property (nonatomic) <CJPayAPIDelegate> originalDelegate;
@property (nonatomic) <CJPayAPIWrapperProtocl> wrapperProtocol;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)wrapperProtocol;
- (void)callState:fromScene:;
- (void)onResponse:;
- (id)reqParams;
- (void)setReqParams:;
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
