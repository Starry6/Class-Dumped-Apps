@interface AWEFeedSmartLoadmoreModelExecuteConfig : NSObject
@property (nonatomic) q execute_count;
@property (nonatomic) float activate_proba;
@property (nonatomic) NSArray labels;
- (long long)execute_count;
- (void)setExecute_count:;
- (float)activate_proba;
- (void)setActivate_proba:;
- (id)labels;
- (void).cxx_destruct;
- (void)setLabels:;
@end
