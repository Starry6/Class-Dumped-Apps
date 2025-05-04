@interface AWEASMusicHistorySuggestionManager : NSObject
@property (nonatomic) NSString suggestionKey;
@property (nonatomic) NSMutableArray dataList;
- (void)didFinishLogin;
- (void)setDataList:;
- (void)didFinishLogout;
- (void)p_discardOldUserHistoryIfNeeded;
- (id)p_uidSuggestionKey;
- (void)p_updateData;
- (id)p_suggestionKeyForUid:;
- (void)removeAllQueries;
- (void)fetchHistorySuggestionWithCompletion:;
- (void)save:;
- (void)dealloc;
- (id)initWithSuggestionType:;
- (void).cxx_destruct;
- (id)suggestionKey;
- (void)setSuggestionKey:;
- (void)removeQuery:;
- (id)dataList;
@end
