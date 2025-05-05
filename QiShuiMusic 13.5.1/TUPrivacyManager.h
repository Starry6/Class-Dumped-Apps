@interface TUPrivacyManager : NSObject
@property (nonatomic) NSArray privacyRules;
- (id)init;
- (void)dealloc;
- (void)setBlockIncomingCommunication:forBusinessID:;
- (id)allBlacklistRules;
- (void)removeRule:;
- (void)addRule:;
- (BOOL)isIncomingCommunicationBlockedForEmailAddress:;
- (BOOL)isIncomingCommunicationBlockedForHandle:;
- (void)setBlockIncomingCommunication:forPhoneNumber:;
- (void)setBlockIncomingCommunication:forEmailAddress:;
- (BOOL)isIncomingCommunicationBlockedForBusinessID:;
- (BOOL)isIncomingCommunicationBlockedForPhoneNumber:;
- (id)privacyRules;
- (void)_handleBlockListChanged:;
+ (id)sharedPrivacyManager;
@end
