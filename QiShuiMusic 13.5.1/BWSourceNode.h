@interface BWSourceNode : BWNode
@property (nonatomic) ^{OpaqueCMClock=} clock;
- (BOOL)stop:;
- (void)makeOutputsLiveIfNeeded;
- (id)clock;
- (BOOL)start:;
- (id)nodeType;
@end
