@interface IMSPIMessage : NSObject
@property (nonatomic) BOOL allowedByScreenTime;
@property (nonatomic) NSString guid;
@property (nonatomic) q messageID;
@property (nonatomic) q itemType;
@property (nonatomic) NSArray chatGuids;
@property (nonatomic) NSString groupID;
@property (nonatomic) NSString chatIdentifier;
@property (nonatomic) BOOL isGroupChat;
@property (nonatomic) NSString service;
@property (nonatomic) NSString text;
@property (nonatomic) NSString body;
@property (nonatomic) NSString summary;
@property (nonatomic) NSAttributedString attributedText;
@property (nonatomic) NSString subject;
@property (nonatomic) NSString effect;
@property (nonatomic) NSString displayName;
@property (nonatomic) IMSPIHandle sender;
@property (nonatomic) NSArray recipients;
@property (nonatomic) NSDate date;
@property (nonatomic) NSDate dateRead;
@property (nonatomic) NSDate dateForLastReadMessageInChat;
@property (nonatomic) BOOL isOutgoing;
@property (nonatomic) BOOL isRead;
@property (nonatomic) BOOL isAudioMessage;
@property (nonatomic) IMSPIMessage referencedMessage;
@property (nonatomic) NSString bundleId;
@property (nonatomic) q messageType;
@property (nonatomic) NSString displayAppName;
@property (nonatomic) LPLinkMetadata richLinkMetadata;
@property (nonatomic) PKCurrencyAmount peerPaymentAmount;
@property (nonatomic) NSArray attachments;
@property (nonatomic) BOOL hasDataDetectedResults;
@property (nonatomic) NSDate lastReadDate;
@property (nonatomic) NSURL url;
- (long long)messageID;
- (void)setGroupID:;
- (long long)messageType;
- (void)setItemType:;
- (id)groupID;
- (void)setService:;
- (id)url;
- (id)recipients;
- (id)subject;
- (void)setAttributedText:;
- (void)dealloc;
- (void)setSubject:;
- (id)body;
- (void)setRecipients:;
- (void)setText:;
- (id)bundleId;
- (id)sender;
- (void)setSummary:;
- (void)setDisplayName:;
- (id)service;
- (id)displayName;
- (long long)itemType;
- (void)setEffect:;
- (BOOL)isRead;
- (id)date;
- (void)setBody:;
- (id)summary;
- (void).cxx_destruct;
- (void)setGuid:;
- (void)setMessageID:;
- (void)setMessageType:;
- (void)setDate:;
- (void)setAttachments:;
- (id)guid;
- (id)description;
- (id)attributedText;
- (id)attachments;
- (void)setBundleId:;
- (id)effect;
- (id)text;
- (void)setSender:;
- (BOOL)isOutgoing;
- (void)setIsRead:;
- (id)referencedMessage;
- (void)setReferencedMessage:;
- (BOOL)isGroupChat;
- (void)setChatIdentifier:;
- (BOOL)allowedByScreenTime;
- (id)richLinkMetadata;
- (BOOL)isAudioMessage;
- (id)chatIdentifier;
- (void)setIsOutgoing:;
- (id)lastReadDate;
- (id)spiChatWithQOS:;
- (void)setIsAudioMessage:;
- (id)chatGuids;
- (void)setChatGuids:;
- (void)setIsGroupChat:;
- (id)dateRead;
- (void)setDateRead:;
- (id)dateForLastReadMessageInChat;
- (void)setDateForLastReadMessageInChat:;
- (id)displayAppName;
- (void)setDisplayAppName:;
- (void)setRichLinkMetadata:;
- (id)peerPaymentAmount;
- (void)setPeerPaymentAmount:;
- (BOOL)hasDataDetectedResults;
- (void)setHasDataDetectedResults:;
@end
