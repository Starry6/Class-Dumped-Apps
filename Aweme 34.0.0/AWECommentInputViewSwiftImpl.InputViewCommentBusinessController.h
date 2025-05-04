@interface AWECommentInputViewSwiftImpl.InputViewCommentBusinessController : NSObject
- (void)clearAllInputContent;
- (void)stopInput;
- (void)recoverInputContent:;
- (void)recoverInputContentWithComment:businessExtra:;
- (id)obtainMediaCoverImage:;
- (id)obtainCurrentMediaCoverImage;
- (void)recoverVisibleInputContent:;
- (id)inputMediaContentDesc;
- (id)inputContentValue;
- (void)recoverInputValue:textExtras:;
- (void)showAccessoryView:;
- (id)publishCommentParamsForServer;
- (void)recoverDataCheck;
- (id)init;
- (void).cxx_destruct;
- (id)plainText;
- (void)refreshContent;
@end
