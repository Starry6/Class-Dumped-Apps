@interface GEOLogMsgEventClientACSuggestions : PBCodable
@property (nonatomic) BOOL hasQuery;
@property (nonatomic) NSString query;
@property (nonatomic) NSMutableArray queryTokens;
@property (nonatomic) NSMutableArray entries;
@property (nonatomic) BOOL hasSelectedIndex;
@property (nonatomic) NSInteger selectedIndex;
@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) NSInteger trigger;
@property (nonatomic) BOOL hasKeypressStatus;
@property (nonatomic) NSInteger keypressStatus;
@property (nonatomic) BOOL hasWithinSectionSelectedIndex;
@property (nonatomic) NSInteger withinSectionSelectedIndex;
@property (nonatomic) BOOL hasSelectedSectionIndex;
@property (nonatomic) NSInteger selectedSectionIndex;
@property (nonatomic) BOOL hasIsRetainedQuery;
@property (nonatomic) BOOL isRetainedQuery;
@property (nonatomic) BOOL hasIsRerankerTriggered;
@property (nonatomic) BOOL isRerankerTriggered;
@property (nonatomic) BOOL hasOverallLatencyInMs;
@property (nonatomic) q overallLatencyInMs;
@property (nonatomic) BOOL hasShouldDifferentiateClientAndServerResults;
@property (nonatomic) BOOL shouldDifferentiateClientAndServerResults;
- (void)setEntries:;
- (void)readAll:;
- (id)init;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (int)selectedIndex;
- (void)setQuery:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)addEntries:;
- (id)query;
- (void)setTrigger:;
- (unsigned long long)hash;
- (int)trigger;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)entries;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasQuery;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setSelectedIndex:;
- (void)clearEntries;
- (unsigned long long)entriesCount;
- (id)entriesAtIndex:;
- (void)setHasTrigger:;
- (BOOL)hasTrigger;
- (id)triggerAsString:;
- (int)StringAsTrigger:;
- (id)queryTokens;
- (void)setQueryTokens:;
- (void)clearQueryTokens;
- (void)addQueryTokens:;
- (unsigned long long)queryTokensCount;
- (id)queryTokensAtIndex:;
- (void)setHasSelectedIndex:;
- (BOOL)hasSelectedIndex;
- (int)keypressStatus;
- (void)setKeypressStatus:;
- (void)setHasKeypressStatus:;
- (BOOL)hasKeypressStatus;
- (id)keypressStatusAsString:;
- (int)StringAsKeypressStatus:;
- (int)withinSectionSelectedIndex;
- (void)setWithinSectionSelectedIndex:;
- (void)setHasWithinSectionSelectedIndex:;
- (BOOL)hasWithinSectionSelectedIndex;
- (int)selectedSectionIndex;
- (void)setSelectedSectionIndex:;
- (void)setHasSelectedSectionIndex:;
- (BOOL)hasSelectedSectionIndex;
- (BOOL)isRetainedQuery;
- (void)setIsRetainedQuery:;
- (void)setHasIsRetainedQuery:;
- (BOOL)hasIsRetainedQuery;
- (BOOL)isRerankerTriggered;
- (void)setIsRerankerTriggered:;
- (void)setHasIsRerankerTriggered:;
- (BOOL)hasIsRerankerTriggered;
- (long long)overallLatencyInMs;
- (void)setOverallLatencyInMs:;
- (void)setHasOverallLatencyInMs:;
- (BOOL)hasOverallLatencyInMs;
- (BOOL)shouldDifferentiateClientAndServerResults;
- (void)setShouldDifferentiateClientAndServerResults:;
- (void)setHasShouldDifferentiateClientAndServerResults:;
- (BOOL)hasShouldDifferentiateClientAndServerResults;
+ (BOOL)isValid:;
+ (Class)entriesType;
+ (Class)queryTokensType;
@end
