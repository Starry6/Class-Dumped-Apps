@interface CNContactToggleBlockCallerAction : CNContactAction
@property (nonatomic) NSNumber isBlockedCachedValue;
- (void).cxx_destruct;
- (void)performActionWithSender:;
- (BOOL)isContactBlockedPreservingChanges:;
- (id)checkIsContactBlocked;
- (id)allNumbersAndEmails;
- (void)setContactBlocked:;
- (id)isBlockedCachedValue;
- (void)setIsBlockedCachedValue:;
@end
