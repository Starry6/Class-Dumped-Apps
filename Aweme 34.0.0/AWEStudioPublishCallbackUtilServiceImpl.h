@interface AWEStudioPublishCallbackUtilServiceImpl : NSObject
- (Class)publishSuccessEventClass;
- (Class)normalVideoTaskClass;
- (Class)imageAlbumTaskClass;
- (id)keyWithUID:;
- (id)publishViewControllerDraftID:;
- (id)flowWithModel:;
- (void)requestProductDetectPostCancelWithToken:completion:;
- (void)requestProductDetectPostCancelWithCompletion:;
- (id)publishTrackerWithModel:;
- (Class)publishEditServiceManagerClass;
@end
