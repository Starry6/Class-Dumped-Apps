@interface DSP_HAL_Mock : NSObject
- (id)createFactory:;
+ (void)setTestHooks:;
+ (BOOL)hasTestHooks;
@end
