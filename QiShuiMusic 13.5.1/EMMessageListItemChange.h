@interface EMMessageListItemChange : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) NSDate displayDate;
@property (nonatomic) <EMMessageListItemChangeSubject> subject;
@property (nonatomic) <EMMessageListItemChangeSummary> summary;
@property (nonatomic) NSArray senderList;
@property (nonatomic) NSArray toList;
@property (nonatomic) NSArray ccList;
@property (nonatomic) BOOL isToMe;
@property (nonatomic) BOOL isCCMe;
@property (nonatomic) ECMessageFlags flags;
@property (nonatomic) NSNumber hasUnflagged;
@property (nonatomic) <EMMessageListItemChangeFlagColors> flagColors;
@property (nonatomic) NSNumber isVIP;
@property (nonatomic) NSNumber isBlocked;
@property (nonatomic) NSNumber unsubscribeType;
@property (nonatomic) NSNumber hasAttachments;
@property (nonatomic) NSNumber conversationNotificationLevel;
@property (nonatomic) NSNumber senderBucket;
@property (nonatomic) <EMMessageListItemChangeReadLater> readLater;
@property (nonatomic) <EMMessageListItemChangeSendLaterDate> sendLaterDate;
@property (nonatomic) <EMMessageListItemChangeFollowUp> followUp;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSNumber conversationID;
@property (nonatomic) NSArray mailboxObjectIDs;
@property (nonatomic) NSArray mailboxes;
@property (nonatomic) <EMCollectionItemID> displayMessageItemID;
@property (nonatomic) NSString ef_publicDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)ef_publicDescription;
- (void)setCount:;
- (id)subject;
- (void)setSubject:;
- (void)addChange:;
- (id)displayDate;
- (void)setDisplayDate:;
- (id)mailboxObjectIDs;
- (id)initWithCoder:;
- (void)setSummary:;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)date;
- (void)encodeWithCoder:;
- (id)summary;
- (void).cxx_destruct;
- (id)isBlocked;
- (void)setDate:;
- (id)description;
- (id)mailboxes;
- (void)setFlags:;
- (id)flags;
- (void)setMailboxes:;
- (id)conversationID;
- (id)count;
- (BOOL)isEqual:;
- (void)setConversationID:;
- (void)setIsBlocked:;
- (id)isVIP;
- (void)setFollowUp:;
- (id)followUp;
- (id)toList;
- (void)setToList:;
- (id)readLater;
- (id)sendLaterDate;
- (id)senderBucket;
- (void)setReadLater:;
- (void)setSendLaterDate:;
- (id)unsubscribeType;
- (void)setSenderBucket:;
- (void)setUnsubscribeType:;
- (id)senderList;
- (void)setSenderList:;
- (id)ccList;
- (void)setCcList:;
- (id)hasAttachments;
- (void)setHasAttachments:;
- (id)hasUnflagged;
- (id)flagColors;
- (BOOL)isToMe;
- (BOOL)isCCMe;
- (id)conversationNotificationLevel;
- (id)displayMessageItemID;
- (void)setIsToMe:;
- (void)setIsCCMe:;
- (void)setHasUnflagged:;
- (void)setFlagColors:;
- (void)setIsVIP:;
- (void)setConversationNotificationLevel:;
- (void)setMailboxObjectIDs:;
- (void)setDisplayMessageItemID:;
- (id)_descriptionForInternal:useDebugDescriptions:;
- (id)_changeDescriptionsForInternal:useDebugDescriptions:;
- (BOOL)applyToMessageListItem:;
+ (BOOL)supportsSecureCoding;
+ (id)changeFrom:to:;
+ (id)changeForKeyPaths:ofItem:;
+ (id)changesForKeyPaths:ofItems:;
@end
