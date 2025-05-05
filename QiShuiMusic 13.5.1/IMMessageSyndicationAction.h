@interface IMMessageSyndicationAction : IMSyndicationAction
@property (nonatomic) q messagePartSyndicationType;
@property (nonatomic) q messagePartSyndicationStatus;
@property (nonatomic) {_NSRange=QQ} messagePartRange;
@property (nonatomic) IMMessagePartGUID messagePartGUID;
@property (nonatomic) BOOL highlighted;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (BOOL)isHighlighted;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)messagePartRange;
- (id)copyDictionaryRepresentation;
- (unsigned char)syndicatedItemType;
- (id)initWithChatGUID:syndicationStartDate:syndicationActionType:messagePartGUID:messagePartRange:;
- (id)initWithChatGUID:syndicationStartDate:syndicationActionType:messagePartGUID:messagePartRange:version:;
- (id)initWithChatGUID:syndicationStartDate:syndicationActionType:encodedMessagePartGUID:messagePartRange:;
- (id)initWithChatGUID:syndicationStartDate:syndicationActionType:encodedMessagePartGUID:messagePartRange:version:;
- (id)messagePartGUID;
- (long long)messagePartSyndicationType;
- (long long)messagePartSyndicationStatus;
+ (BOOL)supportsSecureCoding;
@end
