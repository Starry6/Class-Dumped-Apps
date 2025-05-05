@interface LANotificationUIAppearance : LANotificationOfBooleanState
@property (nonatomic) BOOL willAppear;
@property (nonatomic) BOOL didDisappear;
@property (nonatomic) BOOL isDisplayed;
- (BOOL)didDisappear;
- (BOOL)isDisplayed;
- (BOOL)willAppear;
- (void)newValue:oldValue:completionHandler:;
- (id)darwinNotificationForBoolValue:;
@end
