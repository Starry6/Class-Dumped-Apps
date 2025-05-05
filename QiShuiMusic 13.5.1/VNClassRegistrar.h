@interface VNClassRegistrar : NSObject
+ (BOOL)validateRequestClassName:error:;
+ (Class)classForClassCode:error:;
+ (BOOL)getClassCode:forClass:error:;
+ (BOOL)observationBoundsAreNormalizedToROIForRequestClassCode:revision:;
+ (id)classNameForClassCode:error:;
+ (BOOL)getClassCode:forClassName:error:;
@end
