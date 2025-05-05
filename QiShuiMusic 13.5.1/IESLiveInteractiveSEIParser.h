@interface IESLiveInteractiveSEIParser : NSObject
@property (nonatomic) <IESLiveMonitor> monitor;
- (id)getParseResultWith:metaSEI:;
- (void)parseSEIWith:completion:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
@end
