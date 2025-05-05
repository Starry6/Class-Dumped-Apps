@interface TSPKEntryManager : NSObject
@property (nonatomic) @? customCanHandleBuilder;
@property (nonatomic) NSMutableDictionary entries;
@property (nonatomic) NSMutableDictionary entryEnableDict;
@property (nonatomic) NSMutableDictionary apiModelDict;
- (id)entryEnableDict;
- (void)buildAPI:ofEntryModel:apiClass:;
- (void)registerCustomCanHandleBuilder:;
- (id)apiModelDict;
- (void)buildEntryModelToDict:;
- (BOOL)canHandleEntry:withModel:;
- (id)customCanHandleBuilder;
- (id)didEnterEntry:withModel:;
- (id)handleEnterEntry:withModel:;
- (void)registerEntryType:entryModel:;
- (BOOL)respondToAPIKey:;
- (void)setApiModelDict:;
- (void)setCustomCanHandleBuilder:;
- (void)setEntryEnableDict:;
- (void)setEntryType:enable:;
- (void)setEntries:;
- (id)init;
- (void).cxx_destruct;
- (id)entries;
+ (id)sharedManager;
@end
