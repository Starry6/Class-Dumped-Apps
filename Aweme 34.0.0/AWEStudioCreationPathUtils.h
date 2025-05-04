@interface AWEStudioCreationPathUtils : NSObject
+ (unsigned long long)creationPathTypeForModel:;
+ (BOOL)isMultiPhotoPath:;
+ (BOOL)isRecordMultiVideoPath:;
+ (BOOL)isSinglePhotoPath:;
+ (BOOL)isImportSinglePhotoPath:;
+ (BOOL)isSingleVideoPath:;
+ (BOOL)isRecordSingleVideoPath:;
+ (BOOL)isImportSingleVideoPath:;
+ (BOOL)isImportMultiMaterialPath:;
+ (BOOL)isImportSlidesPath:;
+ (BOOL)isImportSingleLivePhotoPath:;
+ (BOOL)isImportMultiPhotoPath:;
+ (BOOL)isRecordSinglePhotoPath:;
+ (BOOL)isRecordIMSinglePhotoPath:;
+ (BOOL)isSharePath:;
+ (BOOL)isMultiVideoPath:;
@end
