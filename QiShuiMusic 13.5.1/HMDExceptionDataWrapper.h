@interface HMDExceptionDataWrapper : NSObject
@property (nonatomic) NSMutableArray modules;
@property (nonatomic) NSMutableArray dataDicts;
- (id)dataDicts;
- (void)setDataDicts:;
- (id)init;
- (id)modules;
- (void).cxx_destruct;
- (void)setModules:;
@end
