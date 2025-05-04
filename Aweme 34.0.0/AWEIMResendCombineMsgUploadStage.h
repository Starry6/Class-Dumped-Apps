@interface AWEIMResendCombineMsgUploadStage : AWEIMStage
- (void)updateMessageStatusWithResendMsg:;
- (void)start;
+ (BOOL)needReuploadCombineShareMsg:;
@end
