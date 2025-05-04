@interface AWEIMConversationCheckAccountComponent : AWEIMComponentBase
@property (nonatomic) BOOL enableBelongErrorReport;
@property (nonatomic) BOOL enableTrackUidInfo;
- (void)afterInitialComponentAllResolved:;
- (void)hostVC_viewDidAppear;
- (void)setEnableBelongErrorReport:;
- (void)setEnableTrackUidInfo:;
- (BOOL)enableTrackUidInfo;
- (BOOL)enableBelongErrorReport;
- (void)p_checkConversationWithAppUid:context:;
- (void)p_checkMessageWithAppUid:context:;
+ (BOOL)canCreateComponentWithContext:;
@end
