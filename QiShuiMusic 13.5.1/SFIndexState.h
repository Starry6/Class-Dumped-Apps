@interface SFIndexState : NSObject
@property (nonatomic) NSNumber percentMessagesIndexed;
@property (nonatomic) NSNumber percentAttachmentsIndexed;
@property (nonatomic) NSNumber searchIndex;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:;
- (id)searchIndex;
- (void)setSearchIndex:;
- (id)percentMessagesIndexed;
- (void)setPercentMessagesIndexed:;
- (id)percentAttachmentsIndexed;
- (void)setPercentAttachmentsIndexed:;
+ (BOOL)supportsSecureCoding;
@end
