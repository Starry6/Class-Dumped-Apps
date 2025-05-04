@interface AWEIMChatThemeTrackComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)didReceiveNewMessage:reason:;
- (void)didManuallySetChatTheme;
- (void)delayReportBackground:;
- (void)reportBackground:;
- (id)getReportParams:;
- (void)dealloc;
+ (BOOL)canCreateComponentWithContext:;
@end
