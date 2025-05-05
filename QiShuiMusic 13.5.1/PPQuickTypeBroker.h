@interface PPQuickTypeBroker : NSObject
@property (nonatomic) NSString clientIdentifier;
- (id)init;
- (void)warmUpWithCompletion:;
- (void)quickTypeItemsWithLanguageModelingTokens:localeIdentifier:recipients:bundleIdentifier:limit:completion:;
- (void)recentQuickTypeItemsForRecipients:completion:;
- (void)hibernateWithCompletion:;
- (void)registerFeedback:completion:;
- (id)_remoteObjectProxy;
- (void).cxx_destruct;
- (void)quickTypeItemsWithQuery:limit:completion:;
- (id)forwardingTargetForSelector:;
+ (id)sharedInstance;
@end
