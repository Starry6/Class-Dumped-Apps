@interface MSParsecSearchIndexState : NSObject
@property (nonatomic) q indexType;
@property (nonatomic) q percentMessagesIndexed;
@property (nonatomic) q percentAttachmentsIndexed;
- (long long)indexType;
- (id)description;
- (long long)percentMessagesIndexed;
- (long long)percentAttachmentsIndexed;
- (id)initWithPercentMessagesIndexed:percentAttachmentsIndexed:indexType:;
+ (id)indexStateForMessagesIndexed:indexableMessages:attachmentsIndexed:indexableAttachments:;
@end
