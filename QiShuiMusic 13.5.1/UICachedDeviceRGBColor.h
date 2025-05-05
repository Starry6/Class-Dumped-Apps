@interface UICachedDeviceRGBColor : UIDeviceRGBColor
- (BOOL)allowsWeakReference;
- (id)copy;
- (id)autorelease;
- (id)release;
- (BOOL)retainWeakReference;
- (id)retain;
- (unsigned long long)retainCount;
- (id)copyWithZone:;
@end
