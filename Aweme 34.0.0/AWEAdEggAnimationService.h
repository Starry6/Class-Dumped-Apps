@interface AWEAdEggAnimationService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)showEggOnView:aweme:eggModelProtocol:eggFrame:closeButtonFrame:maxWaitToShowTime:completionBlock:clickImageBlock:dismissBlock:canViewBeClicked:;
- (id)showEggOnView:aweme:eggModelProtocol:eggFrame:maxWaitToShowTime:completionBlock:clickImageBlock:dismissBlock:canViewBeClicked:;
+ (void)downloadResourceWithEggModelProtocol:completionBlock:;
@end
