@interface VSWordTimingService : NSObject
@property (nonatomic) NSDictionary wordTimings;
- (void).cxx_destruct;
- (id)wordTimings;
- (void)setWordTimings:;
- (id)timingInfosFrom:withText:;
- (id)timingPlistForLanguage:;
- (id)estimatedTTSWordTimingForText:withLanguage:voiceName:;
@end
