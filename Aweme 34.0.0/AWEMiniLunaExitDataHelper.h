@interface AWEMiniLunaExitDataHelper : NSObject
@property (nonatomic) double enterTs;
@property (nonatomic) AWEMiniLunaExitKeyAction lastAction;
- (void)recordAction:;
- (void)recordEnterMiniLuna;
- (void)reportWithCustomParams:;
- (void)setEnterTs:;
- (BOOL)actionIsValid:;
- (double)enterTs;
- (void).cxx_destruct;
- (id)lastAction;
- (void)setLastAction:;
+ (id)shared;
@end
