@interface PHPersistentChangeFetchRequest : NSObject
@property (nonatomic) PHPersistentChangeToken token;
@property (nonatomic) Q maximumChangeThreshold;
- (id)token;
- (void)setToken:;
- (void).cxx_destruct;
- (unsigned long long)maximumChangeThreshold;
- (void)setMaximumChangeThreshold:;
@end
