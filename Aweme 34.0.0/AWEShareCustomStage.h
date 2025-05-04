@interface AWEShareCustomStage : AWEShareBaseStage
@property (nonatomic) NSString name;
@property (nonatomic) @? runHandler;
@property (nonatomic) @? preparationHandler;
@property (nonatomic) @? asyncPreparationHandler;
- (id)asyncPreparationHandler;
- (void)setAsyncPreparationHandler:;
- (BOOL)prepareBeforeRun;
- (void)prepareBeforeRunWithCompletion:;
- (void)setRunHandler:;
- (id)runHandler;
- (void)run;
- (BOOL)respondsToSelector:;
- (id)description;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)name;
- (id)preparationHandler;
- (void)setPreparationHandler:;
+ (id)stageWithName:preparationHandler:;
+ (id)stageWithName:runHandler:;
+ (id)stageWithName:asyncPreparationHandler:;
@end
