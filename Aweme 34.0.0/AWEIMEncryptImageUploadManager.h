@interface AWEIMEncryptImageUploadManager : NSObject
@property (nonatomic) RxScheduler sharedScheduler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uploadFileWithContext:;
- (id)uploadImagesWithContext:;
- (id)p_errorWithCode:message:;
- (void)p_trackUploadWithContext:result:duration:error:;
- (id)p_generateTempFileForImage:;
- (id)p_uploadImageFromLocalPath:;
- (id)p_resultForResponse:;
- (id)p_uploadImageFromLocalPaths:;
- (BOOL)areResultsValid:;
- (id)init;
- (id)sharedScheduler;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
