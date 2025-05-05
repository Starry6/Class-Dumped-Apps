@interface IESECDetailMediaPreviewFeature : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)configWithRequest:;
- (id)createVideoPlayerViewWithVideoModel:;
- (id)mediaPreviewViewControllerForCommentWithRequest:;
- (id)mediaPreviewViewControllerWithMediaRequest:;
- (id)requestFromAssociatedVC:;
- (id)targetViewForImagePreviewController:atIndex:;
- (id)init;
- (void)dealloc;
+ (id)shared;
@end
