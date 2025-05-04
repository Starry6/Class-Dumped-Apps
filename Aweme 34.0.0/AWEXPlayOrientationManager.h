@interface AWEXPlayOrientationManager : NSObject
- (id)aAWEPadBizUIAdapter;
+ (void)interfaceOrientationAdaptTo:;
+ (void)interfaceOrientationAdaptToMask:;
+ (Class)aAWEPadBizUIAdapterClass;
+ (unsigned long long)supportOrientationMask;
+ (void)setSupportOrientationMask:;
+ (BOOL)shouldAutorotateToSupportedOrientationMask:;
+ (long long)interfaceOrientation;
@end
