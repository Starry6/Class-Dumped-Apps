@interface AWEAdResponderTask : NSObject
@property (nonatomic) Q type;
@property (nonatomic) @? handler;
- (void)setHandler:;
- (id)handler;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)taskWithType:handler:;
+ (id)taskWithType:;
@end
