@interface AWEStudioAlbumRouterService : NSObject
@property (nonatomic) CAKModalTransitionDelegate albumTransitionDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)openAlbumWithConfigure:bizName:callerBiz:extraInfo:trackerInfoInject:completion:;
- (void)openMainRecordAlbumWithPublishModel:extraInfo:configure:;
- (id)albumTransitionDelegate;
- (void)setAlbumTransitionDelegate:;
- (void).cxx_destruct;
@end
