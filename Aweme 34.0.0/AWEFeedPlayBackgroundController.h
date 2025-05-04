@interface AWEFeedPlayBackgroundController : AWEAwemeFeedBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shouldPreventPlayIfActive;
- (BOOL)shouldForbidResumePlayBackground;
@end
