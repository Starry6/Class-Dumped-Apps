@interface MLCANEDeviceOps : MLCDeviceOps
@property (nonatomic) NSInteger deviceOpType;
@property (nonatomic) NSArray units;
@property (nonatomic) @ params;
@property (nonatomic) NSString procedureName;
@property (nonatomic) Q procedureIndex;
@property (nonatomic) _MLCANEModel model;
@property (nonatomic) _ANERequest request;
@property (nonatomic) NSMutableArray constantTensors;
@property (nonatomic) _MLCANEPlistBuilder plistBuilder;
- (id)model;
- (void)setModel:;
- (void)setUnits:;
- (id)request;
- (id)units;
- (void).cxx_destruct;
- (void)setRequest:;
- (id)params;
- (unsigned long long)procedureIndex;
- (id)initWithType:params:;
- (int)deviceOpType;
- (id)procedureName;
- (void)setProcedureName:;
- (void)setProcedureIndex:;
- (id)constantTensors;
- (id)plistBuilder;
- (void)setPlistBuilder:;
+ (id)deviceOpsWithType:params:;
@end
