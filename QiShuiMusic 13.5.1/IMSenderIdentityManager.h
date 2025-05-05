@interface IMSenderIdentityManager : NSObject
@property (nonatomic) CNGeminiManager geminiManager;
- (id)init;
- (void).cxx_destruct;
- (id)geminiManager;
- (void)setGeminiManager:;
- (id)contactPreferredSenderIdentityForHandleID:contact:;
- (id)bestSenderIdentityForHandleID:contact:;
- (id)bestSenderIdentityForHandleIDs:;
- (id)bestSenderIdentityForGeminiHandle:contact:;
+ (id)sharedInstance;
+ (BOOL)isTUSenderIdentity:equalToSubscriptionContext:;
@end
