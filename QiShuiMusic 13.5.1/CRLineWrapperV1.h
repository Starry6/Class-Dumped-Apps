@interface CRLineWrapperV1 : NSObject
- (void)computeLineWrappingForFeatures:imageSize:;
- (unsigned long long)lineWrappingTypeForResult:configuration:strictConfiguration:context:;
- (BOOL)_shouldInsertLineBreakForResult:configuration:context:;
- (id)_allLineFeatures:blockMapping:;
@end
