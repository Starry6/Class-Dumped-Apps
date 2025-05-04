@interface AWEAwemeLongPressFunctionModelBuilder : NSObject
@property (nonatomic) @ model;
@property (nonatomic) NSObject<AWEAwemeLongPressFunctionModelParamsProtocol> params;
@property (nonatomic) @? customBuildBlock;
- (id)initWithModel:params:customBuildBlock:;
- (id)customBuildBlock;
- (void)setCustomBuildBlock:;
- (void)setModel:;
- (id)model;
- (id)build;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
@end
