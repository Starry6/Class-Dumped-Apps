@interface IMDContactStoreChangeHistoryEventsHandler : NSObject
@property (nonatomic) NSMutableDictionary aliasToCNIDMap;
@property (nonatomic) NSMutableDictionary CNIDToAliasesMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)visitUpdateContactEvent:;
- (void)visitAddContactEvent:;
- (void)visitDeleteContactEvent:;
- (void)visitDropEverythingEvent:;
- (void).cxx_destruct;
- (void)setAliasToCNIDMap:;
- (id)aliasToCNIDMap;
- (id)initWithAliasToCNIDMap:;
- (id)getAliasToCNIDMap;
- (id)getCNIDToAliasesMap;
- (id)generateCNIDToAliasesMapFrom:;
- (void)removeAliasFromCNIDToAliasesMap:withCNID:;
- (void)addAliasToCNIDToAliasMap:withCNID:;
- (void)handleAddOrUpdateEventForCNContact:;
- (id)matchAliasesFromCacheForCNContact:;
- (id)CNIDToAliasesMap;
- (void)setCNIDToAliasesMap:;
@end
