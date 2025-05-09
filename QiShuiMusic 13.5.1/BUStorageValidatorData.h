@interface BUStorageValidatorData : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) double finishTime;
@property (nonatomic) double oldStartTime;
@property (nonatomic) double oldFinishTime;
@property (nonatomic) q kvOptType;
@property (nonatomic) BitKVWrapper kv;
@property (nonatomic) NSString key;
@property (nonatomic) @ value;
@property (nonatomic) BOOL success;
- (id)kv;
- (long long)kvOptType;
- (double)oldFinishTime;
- (double)oldStartTime;
- (void)setKv:;
- (void)setKvOptType:;
- (void)setOldFinishTime:;
- (void)setOldStartTime:;
- (void)setStartTime:;
- (id)key;
- (double)startTime;
- (BOOL)success;
- (void)setSuccess:;
- (void)setKey:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (id)toDict;
- (void)setFinishTime:;
- (double)finishTime;
@end
