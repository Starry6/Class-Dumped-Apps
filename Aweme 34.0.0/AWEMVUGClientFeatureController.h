@interface AWEMVUGClientFeatureController : AWEDCFeedBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)interceptorActionBeforeTransferWithURLString:userInfo:;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:;
- (void)containerViewDidLoad;
@end
