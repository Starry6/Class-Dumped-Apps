@interface APayNetwork : NSObject
@property (nonatomic) NSOperationQueue operationQueue;
@property (nonatomic) APayLoadView loadView;
@property (nonatomic) UIView maskView;
- (void)postWithUrl:headerDict:paramData:success:failure:;
- (id)requestWithUrl:headerDict:paramData:;
- (void)setLoadView:;
- (id)init;
- (id)maskView;
- (id)operationQueue;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)loadView;
- (void)setMaskView:;
- (void)setOperationQueue:;
+ (id)defaultClient;
@end
