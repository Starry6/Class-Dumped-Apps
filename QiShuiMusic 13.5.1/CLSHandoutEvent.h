@interface CLSHandoutEvent : CLSInsightEvent
@property (nonatomic) NSString classID;
@property (nonatomic) NSString handoutID;
@property (nonatomic) NSDate dueDate;
@property (nonatomic) NSArray recipientIDs;
@property (nonatomic) NSArray attachmentDetails;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)classID;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dueDate;
- (void)setDueDate:;
- (void)mergeWithObject:;
- (BOOL)validateObject:;
- (void)setClassID:;
- (id)handoutID;
- (void)setHandoutID:;
- (id)initWithClassID:handoutID:eventType:;
- (id)recipientIDs;
- (void)setRecipientIDs:;
- (id)attachmentDetails;
- (void)setAttachmentDetails:;
+ (BOOL)supportsSecureCoding;
@end
