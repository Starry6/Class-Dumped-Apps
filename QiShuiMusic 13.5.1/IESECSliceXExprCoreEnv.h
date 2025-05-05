@interface IESECSliceXExprCoreEnv : NSObject
@property (nonatomic) NSDictionary envData;
- (id)envData;
- (id)envValueOfKey:;
- (id)getGlobalEnv;
- (id)globalEnvValueOfKey:;
- (id)initWithEnvData:;
- (void)setEnvData:;
- (void).cxx_destruct;
@end
