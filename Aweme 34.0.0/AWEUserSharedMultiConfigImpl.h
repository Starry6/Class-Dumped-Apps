@interface AWEUserSharedMultiConfigImpl : AWEUserSharedConfigDefaultImpl
- (id)stringWithKey:;
- (BOOL)boolWithKey:;
- (long long)intWithKey:;
- (double)doubleWithKey:;
- (id)arrayWithKey:;
- (id)dictWithKey:;
- (id)weakTarget;
+ (Class)weakTargetClass;
@end
