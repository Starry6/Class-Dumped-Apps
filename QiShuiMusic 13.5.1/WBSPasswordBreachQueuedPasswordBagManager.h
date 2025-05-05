@interface WBSPasswordBreachQueuedPasswordBagManager : NSObject
@property (nonatomic) NSDictionary allNonbreachedPasswords;
@property (nonatomic) q fillState;
- (id)_dictionaryRepresentation;
- (long long)fillState;
- (void)getPasswordsForNextBatchWithCompletionHandler:;
- (void)saveBagToStore;
- (void)reportPasswordCheckBatchResults:;
- (id)_constructBagOnInternalQueueWithCredentials:ensureFakePasswordGeneration:;
- (id)_unbreachedCredentials;
- (id)_passwordBagFromDictionaryRepresentation:;
- (void).cxx_destruct;
- (id)initWithContext:results:passwordSource:;
- (id)description;
- (id)_constructNewBagOnInternalQueueEnsuringFakePasswordGeneration:;
- (id)allNonbreachedPasswords;
@end
