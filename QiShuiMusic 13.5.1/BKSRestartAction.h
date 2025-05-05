@interface BKSRestartAction : BSAction
@property (nonatomic) Q options;
- (unsigned long long)options;
+ (id)actionWithOptions:;
@end
