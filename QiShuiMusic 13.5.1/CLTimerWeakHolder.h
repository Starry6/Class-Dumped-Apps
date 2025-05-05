@interface CLTimerWeakHolder : NSObject
@property (nonatomic) CLTimer timer;
- (void).cxx_destruct;
- (id)timer;
- (id)initWithTimer:;
+ (id)holderWithTimer:;
@end
