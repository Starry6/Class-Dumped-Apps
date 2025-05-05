@interface AWEIMMessageStateDispatcher : NSObject
@property (nonatomic) YYMemoryCache mid2MessageCache;
@property (nonatomic) YYMemoryCache messageReadReceiptCache;
@property (nonatomic) <IESIMConversationReadReceiptProtocol> conversationReadReceipt;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogout;
- (id)__createCacheObject;
- (void)__handleReadReceiptMap:;
- (id)conversationReadReceipt;
- (id)messageReadReceiptCache;
- (id)mid2MessageCache;
- (void)setConversationReadReceipt:;
- (void)setMessageReadReceiptCache:;
- (void)setMid2MessageCache:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (void)registerMessage:;
+ (void)unregisterMessage:;
+ (void)updateReadReceiptForMessage:finishedParticipantIDs:expectedParticipantIDs:;
+ (void)updateReadReceiptForMessages:requestFrom:completion:;
+ (id)sharedInstance;
@end
