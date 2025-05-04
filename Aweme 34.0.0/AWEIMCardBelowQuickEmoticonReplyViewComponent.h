@interface AWEIMCardBelowQuickEmoticonReplyViewComponent : AWEIMFlexComponent
@property (nonatomic) BOOL enableAllFeedShow;
@property (nonatomic) BOOL adjustSize;
@property (nonatomic) NSObject<AWEIMCardBelowQuickEmoticonReplyComponent> replyComponent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_trackShow;
- (void)bulletContainerDidUpdateSize:;
- (BOOL)enableAllFeedShow;
- (void)setEnableAllFeedShow:;
- (void)activeChangeEmoticonReply;
- (void)p_updateWithRenderModels:needReload:;
- (void)p_emoticonReplyChanged;
- (void)p_createPresenter;
- (id)p_createTextMessageWithContent:quoteReplyMessage:;
- (id)replyComponent;
- (BOOL)adjustSize;
- (void)setAdjustSize:;
- (void)setReplyComponent:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
