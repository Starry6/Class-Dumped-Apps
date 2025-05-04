@interface AWEDCFeedCellSearchAfterWatchConfig : AWEDCFeedBaseConfig
@property (nonatomic) BOOL enable;
@property (nonatomic) NSDictionary commonParams;
@property (nonatomic) q freezeCloseFreq;
@property (nonatomic) double freezeTimestamp;
@property (nonatomic) NSArray showElements;
@property (nonatomic) NSString wordsSource;
- (id)commonParams;
- (void)setCommonParams:;
- (id)wordsSource;
- (long long)freezeCloseFreq;
- (void)setFreezeCloseFreq:;
- (double)freezeTimestamp;
- (void)setFreezeTimestamp:;
- (id)showElements;
- (void)setShowElements:;
- (void)setWordsSource:;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:;
@end
