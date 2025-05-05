@interface IESECMediaPreviewFeature : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createVideoPlayerViewWithVideoModel:;
- (id)createVideoPlayerViewWithVideoModel:needCookie:;
- (id)mediaPreviewVCForCommentWithMediaRequest:;
- (id)mediaPreviewViewControllerWithMediaRequest:;
- (void)reloadData:mediaRequest:;
- (id)init;
- (void)dealloc;
+ (id)shared;
@end
