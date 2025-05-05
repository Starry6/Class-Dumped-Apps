@interface BDRuleEngineDelegateCenter : NSObject
@property (nonatomic) <BDRuleEngineDelegate> delegate;
@property (nonatomic) BOOL hasBeenSetup;
- (BOOL)hasBeenSetup;
- (void)setHasBeenSetup:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (BOOL)hasBeenSetup;
+ (id)defaultCenter;
+ (void)setDelegate:;
+ (id)delegate;
@end
