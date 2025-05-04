@interface AWEIMFileMessageViewModel : AWEIMMessageViewModel
@property (nonatomic) AWEIMMessageAttachmentUploadViewModel uploadVM;
@property (nonatomic) AWEBinding progressBinding;
@property (nonatomic) q vmState;
- (long long)vmState;
- (void)p_computeVMState;
- (id)p_displayMessage;
- (BOOL)p_isUploading;
- (void)setVmState:;
- (id)p_queryFileUploadVM;
- (void)setUploadVM:;
- (id)progressBinding;
- (id)uploadVM;
- (void)setProgressBinding:;
- (id)p_fileAttachmentFileID;
- (BOOL)p_localFileExit;
- (void)startLoadState;
- (void)previewFile;
- (void).cxx_destruct;
@end
