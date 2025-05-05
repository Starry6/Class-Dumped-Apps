@interface IESMMFastVideoImport : NSObject
+ (id)fastImportRequirementDic:;
+ (BOOL)isFastVideoImportUsable:;
+ (BOOL)isFastVideoImportUsable:error:;
+ (BOOL)isFastVideoImportUsable:error:fromMultiClip:;
+ (BOOL)isMultiFastImportDeviceSupport;
+ (BOOL)isMultiFastImportUsable:error:;
+ (BOOL)isSupportFastImport:mediaType:;
@end
