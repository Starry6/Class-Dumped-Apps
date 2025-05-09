@interface AWEIMMessageContentMaskComponent : AWEIMFlexComponent
@property (nonatomic) q lastExchangeResponseSeverMessageId;
@property (nonatomic) UIImage displayImage;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)didUpdateBatchInfoList:batchIDs:source:;
- (void)p_createPresenterIfNeeded;
- (void)p_addKVO:;
- (void)didFinishSetImage:ofMessage:;
- (BOOL)isDisplayingMask;
- (void)p_updateViewHiddenProps;
- (BOOL)isCurrentMessage:;
- (void)p_observeMessage:;
- (void)p_configMosaicPropsIfNeeded:ofMessage:;
- (void)showOrDismissWithMessage:isDismiss:animation:;
- (void)setLastExchangeResponseSeverMessageId:;
- (long long)lastExchangeResponseSeverMessageId;
- (id)displayMessage;
- (void)setScene:;
- (void)dealloc;
- (id)maskView;
- (long long)scene;
- (id)displayImage;
- (void).cxx_destruct;
- (void)setDisplayImage:;
+ (BOOL)canCreateComponentWithContext:;
@end
