@interface WeakListener : NSObject
@property (nonatomic) <SFFeedbackListener> strongListener;
- (void).cxx_destruct;
- (id)initWithListener:;
- (id)strongListener;
@end
