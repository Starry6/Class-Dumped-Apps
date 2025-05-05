@interface SASWShowStopwatchAndPerformAction : SAUISnippet
@property (nonatomic) NSString stopwatchAction;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)stopwatchAction;
- (void)setStopwatchAction:;
+ (id)showStopwatchAndPerformAction;
+ (id)showStopwatchAndPerformActionWithDictionary:context:;
@end
