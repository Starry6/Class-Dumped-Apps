@interface AWEGameCPXPlayInnerPushContent : NSObject
@property (nonatomic) AWEInnerPushCommonView pushView;
@property (nonatomic) AWEInnerPushCommonViewModel pushViewModel;
@property (nonatomic) AWEInnerNotificationRequest request;
@property (nonatomic) <AWEInnerNotificationContentOperator> notificationOperator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:context:;
- (void)handleTapAction;
- (id)notificationOperator;
- (void)setNotificationOperator:;
- (void)updateLeftIcon;
- (void)updateRightActionAreaModel;
- (void)updateTitleAreaItems;
- (void)updateContentAttrString;
- (void)setPushViewModel:;
- (void)updateLayoutProperties;
- (id)pushView;
- (id)pushViewModel;
- (void)setPushView:;
- (id)view;
- (void).cxx_destruct;
- (void)setRequest:;
- (id)request;
@end
