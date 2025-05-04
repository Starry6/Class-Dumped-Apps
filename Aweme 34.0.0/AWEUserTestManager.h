@interface AWEUserTestManager : NSObject
@property (nonatomic) Q loginStrategy;
- (unsigned long long)loginStrategy;
- (void)setLoginStrategy:;
+ (id)sharedManager;
@end
