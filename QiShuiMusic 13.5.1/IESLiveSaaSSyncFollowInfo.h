@interface IESLiveSaaSSyncFollowInfo : NSObject
+ (void)addSyncFollowPageShowCount;
+ (void)addSyncFollowToastShowCount;
+ (BOOL)followerSync;
+ (void)p_checkSyncFollowInfo;
+ (void)p_initFrequencyControlSwitch;
+ (void)p_unsubscribeEventNamed:;
+ (void)setFollowerSync:;
+ (void)setSyncFollowPageHasShown:;
+ (void)setSyncFollowPageLastShowDate:;
+ (BOOL)shouldShowSyncFollowPage;
+ (void)showFollowedToastWithFollowedSync:;
+ (void)subscribeEventNamed:callback:;
+ (BOOL)syncFollowPageHasShown;
+ (id)syncFollowPageLastShowDate;
+ (long long)syncFollowPageShowCount;
+ (long long)syncFollowToastShowCount;
@end
