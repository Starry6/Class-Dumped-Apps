@interface AWERelatedPanelRegisterCenter : NSObject
@property (nonatomic) NSMutableArray strategyClassList;
- (void)registerStrategyClass:;
- (long long)firstResponseClassType:;
- (void)panelBeginTriggerRegister;
- (id)baseStrategy:;
- (Class)firstResponseClass:;
- (id)strategyClassList;
- (void)setStrategyClassList:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
