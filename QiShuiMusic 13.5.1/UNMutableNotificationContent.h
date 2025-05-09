@interface UNMutableNotificationContent : UNNotificationContent
@property (nonatomic) NSString contentType;
@property (nonatomic) _UNNotificationCommunicationContext communicationContext;
@property (nonatomic) NSString header;
@property (nonatomic) NSString footer;
@property (nonatomic) BOOL shouldIgnoreDoNotDisturb;
@property (nonatomic) BOOL shouldIgnoreDowntime;
@property (nonatomic) BOOL shouldSuppressScreenLightUp;
@property (nonatomic) BOOL shouldHideDate;
@property (nonatomic) NSDate date;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) BOOL shouldAuthenticateDefaultAction;
@property (nonatomic) BOOL shouldBackgroundDefaultAction;
@property (nonatomic) BOOL shouldPreventNotificationDismissalAfterDefaultAction;
@property (nonatomic) BOOL shouldSuppressDefaultAction;
@property (nonatomic) NSURL defaultActionURL;
@property (nonatomic) BOOL shouldDisplayActionsInline;
@property (nonatomic) UNNotificationIcon icon;
@property (nonatomic) BOOL shouldShowSubordinateIcon;
@property (nonatomic) NSSet topicIdentifiers;
@property (nonatomic) Q realertCount;
@property (nonatomic) BOOL shouldUseRequestIdentifierForDismissalSync;
@property (nonatomic) BOOL shouldSuppressSyncDismissalWhenRemoved;
@property (nonatomic) NSString accessoryImageName;
@property (nonatomic) NSArray peopleIdentifiers;
@property (nonatomic) BOOL shouldPreemptPresentedNotification;
@property (nonatomic) BOOL shouldHideTime;
@property (nonatomic) BOOL hasDefaultAction;
@property (nonatomic) NSString defaultActionTitle;
@property (nonatomic) NSArray attachments;
@property (nonatomic) NSNumber badge;
@property (nonatomic) NSString body;
@property (nonatomic) NSString categoryIdentifier;
@property (nonatomic) NSString launchImageName;
@property (nonatomic) UNNotificationSound sound;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString threadIdentifier;
@property (nonatomic) NSString title;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) NSString summaryArgument;
@property (nonatomic) Q summaryArgumentCount;
@property (nonatomic) NSString targetContentIdentifier;
@property (nonatomic) Q interruptionLevel;
@property (nonatomic) double relevanceScore;
@property (nonatomic) NSString filterCriteria;
- (void)setRelevanceScore:;
- (void)setHeader:;
- (void)setCategoryIdentifier:;
- (void)setThreadIdentifier:;
- (void)setContentType:;
- (void)setShouldHideTime:;
- (void)setPeopleIdentifiers:;
- (void)setFilterCriteria:;
- (void)setSound:;
- (void)setShouldPreemptPresentedNotification:;
- (void)setAccessoryImageName:;
- (void)setDefaultActionTitle:;
- (void)setShouldUseRequestIdentifierForDismissalSync:;
- (void)setShouldPreventNotificationDismissalAfterDefaultAction:;
- (void)setBadge:;
- (void)setExpirationDate:;
- (void)setSubtitle:;
- (void)setTitle:;
- (void)setShouldAuthenticateDefaultAction:;
- (void)setShouldHideDate:;
- (void)setLaunchImageName:;
- (void)setTargetContentIdentifier:;
- (void)setInterruptionLevel:;
- (void)setShouldSuppressScreenLightUp:;
- (void)setBody:;
- (void)setTopicIdentifiers:;
- (void)setFooter:;
- (void)setSummaryArgument:;
- (void)setShouldSuppressSyncDismissalWhenRemoved:;
- (void)setUserInfo:;
- (void)setHasDefaultAction:;
- (void)setIcon:;
- (void)setDate:;
- (void)setAttachments:;
- (void)setSummaryArgumentCount:;
- (void)setDefaultActionURL:;
- (void)setShouldBackgroundDefaultAction:;
- (void)setShouldShowSubordinateIcon:;
- (void)setShouldIgnoreDoNotDisturb:;
- (void)setShouldIgnoreDowntime:;
- (void)setRealertCount:;
- (void)setShouldDisplayActionsInline:;
- (id)copyWithZone:;
- (void)setShouldSuppressDefaultAction:;
- (void)setCommunicationContext:;
@end
