@interface VCServerBag : NSObject
- (id)init;
- (void)waitForBagLoad;
+ (id)sharedInstance;
+ (void)pullStoreBagKeys;
+ (void)clearBagWithRefreshIntervalInSeconds:;
+ (void)checkKeysAgainstHardcodedPrefs:;
+ (void)retrieveBag;
+ (BOOL)verifyRequiredKeys:withError:;
+ (BOOL)verifyRequiredVoiceChatKeys:;
+ (BOOL)verifyRequiredKeys:;
@end
