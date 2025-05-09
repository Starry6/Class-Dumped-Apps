@interface EMThread : EMCollection
@property (nonatomic) EMMessageRepository repository;
@property (nonatomic) EFQuery originatingQuery;
@property (nonatomic) EMMailboxScope mailboxScope;
@property (nonatomic) EMThreadObjectID objectID;
@property (nonatomic) <EMMailboxTypeResolver> mailboxTypeResolver;
@property (nonatomic) NSDate date;
@property (nonatomic) NSDate displayDate;
@property (nonatomic) ECSubject subject;
@property (nonatomic) NSString summary;
@property (nonatomic) NSArray senderList;
@property (nonatomic) NSArray toList;
@property (nonatomic) NSArray ccList;
@property (nonatomic) BOOL isToMe;
@property (nonatomic) BOOL isCCMe;
@property (nonatomic) ECMessageFlags flags;
@property (nonatomic) BOOL hasUnflagged;
@property (nonatomic) NSIndexSet flagColors;
@property (nonatomic) BOOL isVIP;
@property (nonatomic) BOOL isBlocked;
@property (nonatomic) q unsubscribeType;
@property (nonatomic) BOOL hasAttachments;
@property (nonatomic) q conversationNotificationLevel;
@property (nonatomic) q senderBucket;
@property (nonatomic) NSURL brandIndicatorLocation;
@property (nonatomic) EMReadLater readLater;
@property (nonatomic) NSDate sendLaterDate;
@property (nonatomic) EMFollowUp followUp;
@property (nonatomic) Q count;
@property (nonatomic) q conversationID;
@property (nonatomic) NSArray mailboxObjectIDs;
@property (nonatomic) NSArray mailboxes;
@property (nonatomic) <EMCollectionItemID> displayMessageItemID;
@property (nonatomic) q _internalID;
@property (nonatomic) BOOL hasUnscreenedSender;
@property (nonatomic) NSArray mailboxesIfAvailable;
@property (nonatomic) EMObjectID displayMessageObjectID;
@property (nonatomic) EFFuture displayMessage;
@property (nonatomic) BOOL deleteMovesToTrash;
@property (nonatomic) BOOL supportsArchiving;
@property (nonatomic) BOOL shouldArchiveByDefault;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) <EMCollectionItemID> itemID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString ef_publicDescription;
- (id)ef_publicDescription;
- (void)setCount:;
- (id)mailboxScope;
- (id)subject;
- (void)setSubject:;
- (id)displayDate;
- (id)itemID;
- (void)setRepository:;
- (void)setDisplayDate:;
- (id)query;
- (id)mailboxObjectIDs;
- (id)initWithCoder:;
- (void)setSummary:;
- (id)debugDescription;
- (BOOL)isEditable;
- (id)date;
- (void)encodeWithCoder:;
- (id)summary;
- (id)repository;
- (void).cxx_destruct;
- (BOOL)isBlocked;
- (void)setDate:;
- (id)description;
- (id)mailboxes;
- (void)setFlags:;
- (id)flags;
- (id)displayMessage;
- (void)setMailboxes:;
- (long long)conversationID;
- (unsigned long long)count;
- (id)copyWithZone:;
- (void)setConversationID:;
- (void)setIsBlocked:;
- (BOOL)isVIP;
- (long long)_internalID;
- (void)setFollowUp:;
- (id)followUp;
- (id)toList;
- (void)setToList:;
- (BOOL)supportsArchiving;
- (BOOL)shouldArchiveByDefault;
- (id)readLater;
- (id)sendLaterDate;
- (id)brandIndicatorLocation;
- (long long)senderBucket;
- (void)setReadLater:;
- (void)setSendLaterDate:;
- (long long)unsubscribeType;
- (void)setSenderBucket:;
- (void)setUnsubscribeType:;
- (void)setBrandIndicatorLocation:;
- (id)senderList;
- (void)setSenderList:;
- (id)ccList;
- (void)setCcList:;
- (BOOL)hasAttachments;
- (void)setHasAttachments:;
- (id)objectIDForItemID:;
- (id)itemIDForObjectID:;
- (BOOL)objectIDBelongsToCollection:;
- (void)notifyChangeObserversAboutChangesByItemIDs:;
- (BOOL)hasUnflagged;
- (id)flagColors;
- (BOOL)isToMe;
- (BOOL)isCCMe;
- (long long)conversationNotificationLevel;
- (BOOL)hasUnscreenedSender;
- (id)mailboxesIfAvailable;
- (id)displayMessageItemID;
- (id)displayMessageObjectID;
- (BOOL)deleteMovesToTrash;
- (void)setIsToMe:;
- (void)setIsCCMe:;
- (void)setHasUnflagged:;
- (void)setFlagColors:;
- (void)setIsVIP:;
- (void)setConversationNotificationLevel:;
- (void)setMailboxObjectIDs:;
- (void)setDisplayMessageItemID:;
- (void)set_internalID:;
- (id)mailboxTypeResolver;
- (void)setMailboxTypeResolver:;
- (id)initWithObjectID:originatingQuery:builder:;
- (void)_commonInitWithOriginatingQuery:builder:;
- (id)originatingQuery;
+ (id)log;
+ (BOOL)supportsSecureCoding;
@end
