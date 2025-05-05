@interface CADisplayFlipBook : NSObject
@property (nonatomic) CAContext context;
@property (nonatomic) Q capacity;
- (unsigned long long)capacity;
- (void)purge;
- (id)init;
- (void)dealloc;
- (id)context;
- (id)description;
- (void)setContext:;
- (BOOL)renderForTime:options:error:;
- (double)cancelAtTime:;
- (void)setPurgeable;
+ (id)new;
@end
