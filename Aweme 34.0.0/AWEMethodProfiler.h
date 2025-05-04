@interface AWEMethodProfiler : NSObject
- (id)initWithNibName_awemp_swizzle:bundle:;
- (id)initWithFrame_awemp_swizzle:;
- (id)init_awemp_swizzle;
+ (void)_aweLazyRegisterLoad;
+ (void)safProcessing:withTag:;
+ (void)startProfiler;
+ (void)awe_hookInitMethodForClass:;
+ (void)setTagDict:forSel:forClass:;
@end
