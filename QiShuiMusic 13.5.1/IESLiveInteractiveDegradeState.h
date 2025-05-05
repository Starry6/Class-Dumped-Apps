@interface IESLiveInteractiveDegradeState : NSObject
@property (nonatomic) q level;
@property (nonatomic) q triggerTime;
@property (nonatomic) Q scene;
- (void)setTriggerTime:;
- (long long)triggerTime;
- (void)setLevel:;
- (void)setScene:;
- (long long)level;
- (unsigned long long)scene;
- (id)deepCopy;
@end
