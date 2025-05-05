@interface UgenFullLinkObject : NSObject
@property (nonatomic) NSMutableArray sequenceArray;
@property (nonatomic) NSMutableDictionary logDic;
@property (nonatomic) NSString logPrefix;
- (void)_pbu_printDetailInfo;
- (void)addWithLogKey:;
- (id)logDic;
- (id)sequenceArray;
- (void)setLogDic:;
- (void)setSequenceArray:;
- (id)init;
- (id)dictionaryValue;
- (id)logPrefix;
- (void)setLogPrefix:;
- (void).cxx_destruct;
- (void)print;
@end
