@interface AWETeenSearchGuessViewModel : NSObject
@property (nonatomic) NSArray guessWordList;
@property (nonatomic) NSString suggestLogId;
@property (nonatomic) NSDictionary logPassback;
@property (nonatomic) BOOL isFirst;
- (id)logPassback;
- (void)setLogPassback:;
- (void)setIsFirst:;
- (id)suggestLogId;
- (void)setSuggestLogId:;
- (void)fetchAfterWatchKeyWordListCompletion:;
- (id)guessWordList;
- (void)setGuessWordList:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isFirst;
@end
