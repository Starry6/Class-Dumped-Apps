@interface AWEFeatureServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addFactor:stringValue:group:dataSource:;
- (id)getFactorsWithQueryGroups:bizInfo:error:;
- (id)getFactorWithKeyPath:ext:bizInfo:error:;
- (id)getFactorWithKeyPath:bizInfo:error:;
- (void)addFactor:numicValue:group:dataSource:;
- (void)addFactor:dictValue:group:dataSource:;
- (void)startSession:factorName:dataSource:;
- (void)endSession:factorName:dataSource:;
- (void)registerFactorGroup:bizInfo:callback:;
- (void)registerCombineFactor:bizInfo:callback:;
- (void)addFactorCollectConfigDict:;
- (void)addFactorReportConfigDict:;
- (void)updateAppSessionFactorsWithScene:configDict:extParams:isNew:isForce:;
- (void)setup;
+ (id)sharedInstance;
@end
