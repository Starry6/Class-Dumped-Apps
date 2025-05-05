@interface IMChatSyndicationAction : IMSyndicationAction
@property (nonatomic) BOOL autoDonateMessages;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (id)copyWithZone:;
- (BOOL)isAutoDonatingMessages;
- (unsigned char)syndicatedItemType;
- (id)initWithChatGUID:syndicationStartDate:autoDonateMessages:;
- (id)initWithChatGUID:syndicationStartDate:autoDonateMessages:version:;
- (id)initWithChatGUID:syndicationStartDate:deserializedSyndicationActionType:version:;
- (BOOL)autoSyndicateMessages;
+ (BOOL)supportsSecureCoding;
@end
