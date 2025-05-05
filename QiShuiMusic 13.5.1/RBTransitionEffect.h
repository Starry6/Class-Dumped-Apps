@interface RBTransitionEffect : NSObject
@property (nonatomic) I type;
@property (nonatomic) float beginTime;
@property (nonatomic) float duration;
@property (nonatomic) I events;
- (float)beginTime;
- (void)setType:;
- (unsigned long long)hash;
- (void)setDuration:;
- (void)setBeginTime:;
- (void)setEvents:;
- (unsigned int)type;
- (void).cxx_destruct;
- (unsigned int)events;
- (float)duration;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (void)setArgumentValue:atIndex:;
- (float)argumentValueAtIndex:;
@end
