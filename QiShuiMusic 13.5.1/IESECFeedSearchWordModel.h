@interface IESECFeedSearchWordModel : IESECBaseApiModel
@property (nonatomic) NSString word;
@property (nonatomic) NSString wordId;
@property (nonatomic) NSString reason;
- (id)reason;
- (void)setReason:;
- (void).cxx_destruct;
- (id)wordId;
- (void)setWordId:;
- (id)word;
- (void)setWord:;
+ (id)JSONKeyPathsByPropertyKey;
@end
