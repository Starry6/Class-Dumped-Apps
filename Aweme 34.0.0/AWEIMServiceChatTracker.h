@interface AWEIMServiceChatTracker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)serviceChatTrackersWithToUser:conversationID:;
+ (void)trackEventName:conversation:extra:;
+ (id)serviceChatRoleInfoForIESConversation:;
+ (id)serviceChatRoleInfoForToUser:;
+ (id)serviceChatTrackersWithToUser:conversation:;
+ (id)messageTabServiceChatTracker;
+ (void)addLifeAccountParams:peerUser:;
+ (void)addCommonParamsWithParams:;
@end
