@interface IESLiveSaaSVerificationApi : HTSLiveApi
- (void)fetchIdentifyCodeWithRoomID:anchorID:secAnchorId:completion:;
- (void)fetchIdentifyStatusWithVerificationId:MsgID:Verified:;
@end
