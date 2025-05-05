@interface HTSProductsRequestDelegate : NSObject
@property (nonatomic) @? successBlock;
@property (nonatomic) @? failureBlock;
@property (nonatomic) IESStore store;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStore:;
- (id)failureBlock;
- (void)setFailureBlock:;
- (void)productsRequest:didReceiveResponse:;
- (void)request:didFailWithError:;
- (void).cxx_destruct;
- (void)requestDidFinish:;
- (id)store;
- (id)successBlock;
- (void)setSuccessBlock:;
@end
