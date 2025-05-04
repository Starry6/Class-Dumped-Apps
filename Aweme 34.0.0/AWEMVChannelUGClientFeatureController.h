@interface AWEMVChannelUGClientFeatureController : AWEMVChannelBaseController
@property (nonatomic) BOOL isViewDidLoad;
@property (nonatomic) BOOL firstLoadNeedAppendData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isViewDidLoad;
- (void)setIsViewDidLoad:;
- (BOOL)interceptorActionBeforeTransferWithURLString:userInfo:;
- (unsigned long long)interceptorActionWhenTransferingWithTransitionInfo:;
- (BOOL)firstLoadNeedAppendData;
- (void)setFirstLoadNeedAppendData:;
- (void)viewDidLoad;
@end
