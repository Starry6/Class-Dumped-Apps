@interface BDRuleExtraResult : NSObject
@property (nonatomic) BOOL hitRule;
@property (nonatomic) BOOL needPostProcess;
@property (nonatomic) NSDictionary context;
- (BOOL)hitRule;
- (BOOL)needPostProcess;
- (void)setHitRule:;
- (void)setNeedPostProcess:;
- (id)init;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
@end
