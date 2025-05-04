@interface AWEStudioMattingUtils : NSObject
+ (id)effectModel;
+ (void)setEffectModel:;
+ (BOOL)currentEffectModelNeedMatting:atIndex:;
+ (unsigned long long)convertMattingType:;
+ (id)checkPathHasExistAndDeleteOld:;
@end
