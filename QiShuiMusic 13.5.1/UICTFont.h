@interface UICTFont : UIFont
- (BOOL)allowsWeakReference;
- (unsigned long long)hash;
- (id)release;
- (BOOL)retainWeakReference;
- (id)retain;
- (unsigned long long)_cfTypeID;
- (unsigned long long)retainCount;
- (BOOL)isEqual:;
@end
