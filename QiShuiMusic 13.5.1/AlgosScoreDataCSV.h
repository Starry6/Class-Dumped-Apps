@interface AlgosScoreDataCSV : NSObject
@property (nonatomic) AlgosScoreCSVReader rawStreamData;
@property (nonatomic) NSMutableDictionary statsDict;
@property (nonatomic) NSInteger debug;
- (id)init;
- (void)setDebug:;
- (void)dealloc;
- (int)debug;
- (int)transformer;
- (void).cxx_destruct;
- (id)readData:;
- (void)clearStreamingData;
- (void)populateScore:;
- (id)readData:catchException:;
- (id)readDirectoryAndScore:score:options:;
- (id)rawStreamData;
- (void)setRawStreamData:;
- (id)statsDict;
- (void)setStatsDict:;
@end
