@interface AWEIMIncentiveFetchAvailableGroupChatFromDBManager : NSObject
- (void)getAvailableGroupChatFromDBWithScanFinishCompletion:appendCompletion:;
- (void)fetchAvailableGroupChatFromDBWithCompletion:appendCompletion:scanDBConfig:;
- (id)init;
+ (id)chatDataManager;
+ (void)p_fillAvailableGroupChatWithCons:scanDBConfig:;
+ (void)scanFinishWithScanDBConfig:;
+ (BOOL)isValidWithConversation:;
@end
