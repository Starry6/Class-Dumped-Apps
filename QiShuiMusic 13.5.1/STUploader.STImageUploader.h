@interface STUploader.STImageUploader : NSObject
- (int)uploadImageXCheckIfNeedTry:tryCount:;
- (void)uploadImageXDidFinish:error:;
- (void)uploadImageXProgressDidUpdate:fileIndex:;
- (void)uploadImageXsDidFinish;
- (id)init;
- (void).cxx_destruct;
@end
