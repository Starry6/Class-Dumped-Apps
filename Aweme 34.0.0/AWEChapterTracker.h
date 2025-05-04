@interface AWEChapterTracker : NSObject
@property (nonatomic) AWEChapterContext pageContext;
- (id)commonParams;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)aAWEPlayInteractionAdapter;
- (void)trackChapterProgressClick:;
- (void)trackChapterProgressShow:;
- (void)trackCommentButtonClick:;
- (void)trackDataForEnterPrivateChatWithPeerUserID:;
- (void)trackDataForEnterGroupChatWithCID:;
- (void)trackEnterUserProfileWithEnterMethod:;
- (void).cxx_destruct;
- (void)setPageContext:;
- (id)pageContext;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;
@end
