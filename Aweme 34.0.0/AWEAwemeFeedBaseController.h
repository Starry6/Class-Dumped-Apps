@interface AWEAwemeFeedBaseController : AWEBaseController
@property (nonatomic) UIViewController<AWEFeedContainerProtocol> outerFeedContainer;
@property (nonatomic) UIViewController<AWEAwemeNewDetailTableContainerProtocol> innerDetailFeedContainer;
@property (nonatomic) BOOL isInOuterFeed;
@property (nonatomic) BOOL isInInnerDetailFeed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)outerFeedContainer;
- (id)innerDetailFeedContainer;
- (BOOL)isInOuterFeed;
- (BOOL)isInInnerDetailFeed;
@end
