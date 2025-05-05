@interface MFDataDetectors : NSObject
+ (id)urlMatchesForString:;
+ (id)urlMatchesForString:includingTel:;
+ (BOOL)urlIfyNode:phoneNumberTypes:;
+ (BOOL)urlIfyNode:;
+ (id)sharedDetectionController;
+ (Class)_DDURLifierClass;
@end
