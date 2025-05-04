@interface AWELiveAnchorInnerPushContent : NSObject
@property (nonatomic) IESLiveAnchorInnerPushModel model;
@property (nonatomic) AWEInnerPushCommonView pushView;
@property (nonatomic) AWEInnerPushCommonViewModel pushViewModel;
@property (nonatomic) <AWEInnerNotificationContentOperator> notificationOperator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:context:;
- (void)handleTapAction;
- (id)notificationOperator;
- (void)setNotificationOperator:;
- (void)updateSubTitle;
- (void)setPushViewModel:;
- (id)pushView;
- (id)pushViewModel;
- (void)setPushView:;
- (void)updatePushViewModel;
- (void)updateLeftArea;
- (void)updateMiddleArea;
- (void)updateRightArea;
- (void)setModel:;
- (id)view;
- (id)model;
- (void).cxx_destruct;
- (void)updateTitle;
- (void)updateHeight;
@end
