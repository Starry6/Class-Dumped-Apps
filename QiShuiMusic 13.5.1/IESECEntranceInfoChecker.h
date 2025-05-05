@interface IESECEntranceInfoChecker : NSObject
@property (nonatomic) IESECEntranceInfoScene scene;
@property (nonatomic) BOOL filterEnable;
- (id)checkForceRule:;
- (BOOL)checkMajorList:;
- (BOOL)checkPut:value:;
- (BOOL)checkDelete:;
- (BOOL)checkModify:toValue:;
- (void)checkRequiredOperation:operation:;
- (void)checkRequiredPut:;
- (void)checkRequiredRemove:;
- (BOOL)filterEnable;
- (void)setFilterEnable:;
- (void)setupFilterEnable;
- (void)setScene:;
- (id)initWithScene:;
- (id)scene;
- (void).cxx_destruct;
@end
