@interface EDPBInteractionEventCategoryInferred : PBCodable
@property (nonatomic) q accountId;
@property (nonatomic) q mailboxId;
@property (nonatomic) NSInteger mailboxType;
@property (nonatomic) q conversationId;
@property (nonatomic) q messageId;
@property (nonatomic) BOOL hasAccountId;
@property (nonatomic) q accountId;
@property (nonatomic) BOOL hasMailboxId;
@property (nonatomic) q mailboxId;
@property (nonatomic) BOOL hasMailboxType;
@property (nonatomic) NSInteger mailboxType;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q conversationId;
@property (nonatomic) BOOL hasMessageId;
@property (nonatomic) q messageId;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (nonatomic) BOOL hasPositive;
@property (nonatomic) BOOL positive;
@property (nonatomic) BOOL hasCategoryType;
@property (nonatomic) NSInteger categoryType;
@property (nonatomic) BOOL hasModelId;
@property (nonatomic) I modelId;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) I modelVersion;
@property (nonatomic) BOOL hasFeaturesImportant;
@property (nonatomic) EDPBModelFeaturesImportant featuresImportant;
@property (nonatomic) BOOL hasFeaturesPromotion;
@property (nonatomic) EDPBModelFeaturesPromotion featuresPromotion;
- (unsigned int)modelVersion;
- (long long)accountId;
- (void)setHasModelVersion:;
- (void)setModelVersion:;
- (BOOL)hasModelId;
- (long long)messageId;
- (double)score;
- (void)writeTo:;
- (BOOL)hasModelVersion;
- (unsigned long long)hash;
- (void)copyTo:;
- (unsigned int)modelId;
- (void)mergeFrom:;
- (void)setModelId:;
- (void)setScore:;
- (void).cxx_destruct;
- (int)categoryType;
- (BOOL)readFrom:;
- (BOOL)hasScore;
- (void)setAccountId:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setCategoryType:;
- (BOOL)isEqual:;
- (void)setHasScore:;
- (id)copyWithZone:;
- (void)setMessageId:;
- (long long)conversationId;
- (void)setConversationId:;
- (BOOL)hasConversationId;
- (long long)mailboxId;
- (int)mailboxType;
- (void)setMailboxType:;
- (void)setHasModelId:;
- (void)setHasAccountId:;
- (BOOL)hasAccountId;
- (void)setHasMailboxType:;
- (BOOL)hasMailboxType;
- (id)mailboxTypeAsString:;
- (int)StringAsMailboxType:;
- (BOOL)hasMessageId;
- (void)setHasCategoryType:;
- (BOOL)hasCategoryType;
- (id)categoryTypeAsString:;
- (int)StringAsCategoryType:;
- (void)withHasher:setMessage:data:;
- (void)setMailboxId:;
- (void)setHasMailboxId:;
- (BOOL)hasMailboxId;
- (void)setHasConversationId:;
- (void)setHasMessageId:;
- (void)setPositive:;
- (void)setHasPositive:;
- (BOOL)hasPositive;
- (BOOL)hasFeaturesImportant;
- (BOOL)hasFeaturesPromotion;
- (BOOL)positive;
- (id)featuresImportant;
- (void)setFeaturesImportant:;
- (id)featuresPromotion;
- (void)setFeaturesPromotion:;
@end
