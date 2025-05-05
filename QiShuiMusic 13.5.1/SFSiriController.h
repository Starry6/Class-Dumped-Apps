@interface SFSiriController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)isSiriEnabled;
+ (BOOL)isHeySiriEnabled;
+ (BOOL)isSiriAllowedWhileLocked;
+ (BOOL)isCurrentLocaleSupported;
+ (BOOL)hasUserSeenAnnounceMessagesOptOutScreen;
+ (void)setHasUserSeenAnnounceMessagesOptOutScreen:;
+ (BOOL)hasUserSeenAnnounceCallsOptOutScreen;
+ (void)setHasUserSeenAnnounceCallsOptOutScreen:;
+ (BOOL)isAnnounceMessagesEnabled;
+ (void)setAnnounceMessagesEnabled:;
+ (BOOL)isAnnounceMessagesSupported;
+ (BOOL)isAnnounceEnabledForHeadphones;
+ (BOOL)isAnnounceSupported;
+ (BOOL)hasUserSeenAnnounceNotificationsOptOutScreen;
+ (void)setHasUserSeenAnnounceNotificationsOptOutScreen:;
+ (long long)announceCallsState;
+ (void)setAnnounceCallsState:;
+ (BOOL)shouldPromptForAnnounceMessagesForProductID:isUpsellFlow:;
+ (BOOL)shouldPromptForAnnounceCallsForProductID:supportsInEarDetection:isUpsellFlow:;
+ (BOOL)shouldPromptForAnnounceNotificationsForProductID:isUpsellFlow:;
@end
