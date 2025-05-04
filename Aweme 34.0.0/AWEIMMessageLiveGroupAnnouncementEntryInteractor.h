@interface AWEIMMessageLiveGroupAnnouncementEntryInteractor : AWEIMComponentBase
@property (nonatomic) NSMutableSet requestedSet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)didFetchDataForMessageId:;
- (BOOL)hasFetchedDataForMessageId:;
- (id)vcParent;
- (BOOL)canShowLiveGroupAnnouncementEntryWithConversation:;
- (BOOL)tryShowLiveGroupAnnouncementBubbleWithCon:anchorView:;
- (id)requestedSet;
- (void)setRequestedSet:;
- (id)view;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
+ (id)interactorForConversationId:;
+ (BOOL)enableLiveGroupAnnouncementInteractor:;
+ (id)tableForInteractor;
+ (id)sharedInstance;
@end
