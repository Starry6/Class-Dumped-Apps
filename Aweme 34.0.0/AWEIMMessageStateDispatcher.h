@interface AWEIMMessageStateDispatcher : NSObject
@property (nonatomic) YYMemoryCache mid2MessageCache;
@property (nonatomic) YYMemoryCache messageReadReceiptCache;
@property (nonatomic) <IESIMConversationReadReceiptProtocol> conversationReadReceipt;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (id)conversationReadReceipt;
- (id)__createCacheObject;
- (void)setMid2MessageCache:;
- (void)setMessageReadReceiptCache:;
- (void)setConversationReadReceipt:;
- (id)messageReadReceiptCache;
- (id)mid2MessageCache;
- (void)__handleReadReceiptMap:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (void)updateReadReceiptForMessages:requestFrom:completion:;
+ (void)updateReadReceiptForMessage:finishedParticipantIDs:expectedParticipantIDs:;
+ (id)sharedInstance;
@end
