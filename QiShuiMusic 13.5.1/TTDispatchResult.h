@interface TTDispatchResult : NSObject
@property (nonatomic) NSString originUrl;
@property (nonatomic) NSString finalUrl;
@property (nonatomic) NSString etag;
@property (nonatomic) NSString epoch;
@property (nonatomic) Q dispatchState;
- (id)finalUrl;
- (id)initWithUrl:dispatchState:;
- (id)initWithUrl:finalUrl:etag:epoch:dispatchState:;
- (id)originUrl;
- (void)setFinalUrl:;
- (void)setOriginUrl:;
- (id)etag;
- (void)setEpoch:;
- (id)epoch;
- (void).cxx_destruct;
- (void)setEtag:;
- (unsigned long long)dispatchState;
- (void)setDispatchState:;
@end
