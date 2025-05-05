@interface AVHapticSequenceEntry : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) BOOL running;
@property (nonatomic) BOOL detached;
- (id)initWithHandler:;
- (void)setRunning:;
- (BOOL)running;
- (void)setHandler:;
- (id)handler;
- (BOOL)detached;
- (void).cxx_destruct;
- (void)setDetached:;
@end
