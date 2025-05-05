@interface SCNKeyedArchiver : NSKeyedArchiver
@property (nonatomic) BOOL skipMorphTargets;
@property (nonatomic) NSDictionary options;
- (void)setOptions:;
- (void)dealloc;
- (id)options;
- (BOOL)skipMorphTargets;
- (void)setSkipMorphTargets:;
+ (id)archivedDataWithRootObject:options:;
@end
