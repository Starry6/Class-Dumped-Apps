@interface AWEShareStatsStage : AWEShareBaseStage
@property (nonatomic) @? handler;
- (void)statsNewShare;
- (void)trackShareEvent;
- (BOOL)shouldStatsNewShare;
- (void)setHandler:;
- (void)run;
- (id)handler;
- (void).cxx_destruct;
- (id)initWithHandler:;
+ (id)stageWithEvent:keyForItemID:;
@end
