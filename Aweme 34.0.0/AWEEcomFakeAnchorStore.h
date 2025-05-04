@interface AWEEcomFakeAnchorStore : NSObject
@property (nonatomic) NSString currentGid;
@property (nonatomic) NSMutableArray guessWords;
@property (nonatomic) NSMutableDictionary impressionExtraInfo;
- (void)updateFakeGuessWordsForWords:gid:;
- (void)addImpressionExtraInfo:gid:;
- (void)removeAllFakeWords;
- (id)currentGid;
- (void)setCurrentGid:;
- (id)guessWords;
- (id)impressionExtraInfo;
- (id)maskedSearchParamsForGid:;
- (void)setImpressionExtraInfo:;
- (void)setGuessWords:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
