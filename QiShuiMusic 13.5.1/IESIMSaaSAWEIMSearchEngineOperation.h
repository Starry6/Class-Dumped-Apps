@interface IESIMSaaSAWEIMSearchEngineOperation : NSOperation
@property (nonatomic) NSString keyword;
@property (nonatomic) @? operation;
@property (nonatomic) @? completion;
- (id)completion;
- (id)operation;
- (void)setCompletion:;
- (void)setOperation:;
- (void)main;
- (void).cxx_destruct;
- (void)setKeyword:;
- (id)keyword;
@end
