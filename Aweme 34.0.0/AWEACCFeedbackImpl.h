@interface AWEACCFeedbackImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)acc_studioRegisterParsers;
- (void)acc_recordForVideoUpload:code:stage:;
- (void)acc_recordForVideoMerge:code:;
- (void)acc_recordForVideoRecord:code:;
- (void)acc_recordForCameraInit:code:;
- (void)acc_recordForSaveVideoDraft:code:;
- (void)acc_recordForLoadVideoDraft:code:;
- (void)acc_recordForDeleteVideoDraft:code:;
- (void)acc_recordForTotalVideoDraft:code:draftCreationData:;
- (void)acc_recordForVideoDraftTimeline:code:draftInfo:title:;
@end
