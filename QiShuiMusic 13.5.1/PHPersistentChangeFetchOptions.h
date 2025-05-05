@interface PHPersistentChangeFetchOptions : NSObject
@property (nonatomic) Q maximumChangeThreshold;
@property (nonatomic) BOOL excludesPrivateChanges;
- (unsigned long long)maximumChangeThreshold;
- (void)setMaximumChangeThreshold:;
- (BOOL)excludesPrivateChanges;
- (void)setExcludesPrivateChanges:;
@end
