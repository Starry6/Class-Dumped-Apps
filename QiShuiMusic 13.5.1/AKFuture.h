@interface AKFuture : NSObject
@property (nonatomic) BOOL resolved;
@property (nonatomic) double maxWait;
@property (nonatomic) NSDate beginDate;
@property (nonatomic) NSCondition valueCondition;
@property (nonatomic) NSMutableArray internalWrapper;
- (id)beginDate;
- (id)init;
- (void)setValueCondition:;
- (void)setResolved:;
- (id)valueCondition;
- (double)maxWait;
- (void)setBeginDate:;
- (void)setValue:;
- (id)initWithMaxWait:description:;
- (void)setMaxWait:;
- (void)setInternalWrapper:;
- (id)internalWrapper;
- (void).cxx_destruct;
- (id)value;
- (BOOL)resolved;
@end
