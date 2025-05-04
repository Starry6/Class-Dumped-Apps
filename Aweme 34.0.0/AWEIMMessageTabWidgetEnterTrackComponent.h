@interface AWEIMMessageTabWidgetEnterTrackComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMWidgetTrackContextProtocol> widgetContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)trackEnterMessageTabFromWidgetWithContext:;
- (void)messageTabDidDisappear;
- (id)extraWidgetEnterChatParams;
- (void)setWidgetContext:;
- (id)widgetContext;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
