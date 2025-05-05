@interface SISchemaUserViewRegionInteraction : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger viewRegionDesignation;
@property (nonatomic) BOOL hasViewRegionDesignation;
@property (nonatomic) NSInteger userViewInteraction;
@property (nonatomic) BOOL hasUserViewInteraction;
@property (nonatomic) NSData jsonData;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setViewRegionDesignation:;
- (BOOL)hasViewRegionDesignation;
- (void)setHasViewRegionDesignation:;
- (void)deleteViewRegionDesignation;
- (int)viewRegionDesignation;
- (void)setUserViewInteraction:;
- (BOOL)hasUserViewInteraction;
- (void)setHasUserViewInteraction:;
- (void)deleteUserViewInteraction;
- (int)userViewInteraction;
@end
