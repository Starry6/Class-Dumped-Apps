@interface AWEMarketingInnerPushCommonContent : NSObject
@property (nonatomic) AWEInnerNotificationRequest request;
@property (nonatomic) AWEMarketingInnerPushCommonView currentView;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) AWEInnerPushControlModel pushControlModel;
@property (nonatomic) NSString bizType;
@property (nonatomic) NSString pushType;
@property (nonatomic) NSNumber dismissTimeInterval;
@property (nonatomic) NSDictionary frontierPayLoad;
@property (nonatomic) <AWEInnerNotificationContentOperator> notificationOperator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (BOOL)disablePullIndicatorView;
- (id)bizType;
- (void)setBizType:;
- (void)renderModel:context:;
- (void)handleTapAction;
- (id)notificationOperator;
- (void)viewWillDisappearWithReason:;
- (double)dismissTimerInterval;
- (BOOL)disableUseBusinessTypeDeterminDismissTimerInterval;
- (BOOL)tapGestureIsEnable:;
- (id)trackingModelForScene:;
- (void)setNotificationOperator:;
- (void)setPushControlModel:;
- (id)pushControlModel;
- (void)setFrontierPayLoad:;
- (id)frontierPayLoad;
- (id)dismissTimeInterval;
- (void)setDismissTimeInterval:;
- (id)businessType;
- (void)setPushType:;
- (id)pushType;
- (id)view;
- (id)extra;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)setRequest:;
- (id)request;
- (void)setCurrentView:;
- (id)currentView;
@end
