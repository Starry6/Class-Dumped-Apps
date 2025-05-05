@interface ISDialogOperation : ISOperation
@property (nonatomic) @ userNotification;
@property (nonatomic) <ISDialogOperationDelegate> delegate;
@property (nonatomic) ISDialog dialog;
@property (nonatomic) BOOL performDefaultActions;
@property (nonatomic) ISDialogButton selectedButton;
@property (nonatomic) NSArray textFieldValues;
- (id)init;
- (void)cancel;
- (void)_run;
- (void)dealloc;
- (void)run;
- (void)setUserNotification:;
- (id)dialog;
- (void)setDialog:;
- (id)userNotification;
- (id)textFieldValues;
- (id)selectedButton;
- (void)setSelectedButton:;
- (void)handleButtonSelected:withResponseDictionary:;
- (void)_handleResponseForNotification:responseFlags:;
- (void)_showUserNotification:;
- (void)_waitForUserNotificationResponse:;
- (BOOL)performDefaultActions;
- (void)setPerformDefaultActions:;
+ (id)operationWithDialog:;
+ (id)operationWithError:;
@end
