@interface AWEShareAwemeStatsStage : AWEShareStatsStage
- (id)aAWELiteUGSocialModuleAdapter;
- (id)aAWEShareServiceDOUYINLiteAdaper;
- (void)statsWithEventContext:;
- (void)trackAdShareEvent;
- (void)trackShareEventWithContext:;
- (void)adapter_statsWithEventContext:;
- (void)updateShareVideoEventBuilder:;
- (id)init;
+ (Class)aAWELiteUGSocialModuleAdapterClass;
+ (Class)aAWEShareServiceDOUYINLiteAdaperClass;
@end
