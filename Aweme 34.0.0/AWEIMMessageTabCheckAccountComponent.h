@interface AWEIMMessageTabCheckAccountComponent : AWEIMComponentBase
@property (nonatomic) BOOL enableBelongErrorReport;
@property (nonatomic) BOOL enableTrackUidInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)hostVC_viewDidAppear;
- (void)didReloadChatList;
- (void)didFinishLoadFirstPageData;
- (void)setEnableBelongErrorReport:;
- (void)setEnableTrackUidInfo:;
- (BOOL)enableTrackUidInfo;
- (BOOL)enableBelongErrorReport;
- (void)p_checkConversation;
+ (BOOL)canCreateComponentWithContext:;
@end
