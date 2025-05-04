@interface AWECoverSearchHistoryAddWordsModel : IESLiveBridgeModel
@property (nonatomic) NSString word;
@property (nonatomic) NSString type;
@property (nonatomic) NSString wordReason;
@property (nonatomic) NSString timeStamp;
- (id)wordReason;
- (void)setWordReason:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)timeStamp;
- (void)setTimeStamp:;
- (id)word;
- (void)setWord:;
+ (id)modelCustomPropertyMapper;
@end
