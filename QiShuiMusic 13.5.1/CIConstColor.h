@interface CIConstColor : CIColor
- (id)components;
- (void)dealloc;
- (double)red;
- (id)cgColor;
- (double)blue;
- (id)colorSpace;
- (unsigned long long)numberOfComponents;
- (double)green;
- (unsigned long long)hash;
- (id)autorelease;
- (id)release;
- (double)alpha;
- (id)retain;
- (id)rgbColor;
- (unsigned long long)retainCount;
- (BOOL)isEqual:;
+ (id)alloc;
@end
