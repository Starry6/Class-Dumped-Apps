@interface AWEIMChatCellLightInteractionManager : NSObject
@property (nonatomic) NSMutableDictionary demoteControllerDictionary;
@property (nonatomic) Q globalStatusCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (id)demoteContextWithConversationID:;
- (void)demoteWithConversationID:;
- (id)createDemoteContextWithConversationID:globalIndex:;
- (void)checkExposedIfNeededWithConversationID:;
- (void)willEnterMessageTab;
- (id)demoteControllerDictionary;
- (unsigned long long)globalStatusCount;
- (void)setGlobalStatusCount:;
- (BOOL)checkLastestMsgShouldDemoteWithChat:;
- (void)setDemoteControllerDictionary:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)baseCheckShouldShowLightInteractionWithChat:;
+ (BOOL)isCompanyAccount:;
+ (id)sharedInstance;
+ (id)defaultSource;
@end
