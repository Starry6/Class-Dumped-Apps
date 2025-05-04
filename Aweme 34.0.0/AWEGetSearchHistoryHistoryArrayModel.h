@interface AWEGetSearchHistoryHistoryArrayModel : IESLiveBridgeModel
@property (nonatomic) NSString timeStamp;
@property (nonatomic) NSString type;
@property (nonatomic) NSString word;
@property (nonatomic) NSString wordReason;
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
