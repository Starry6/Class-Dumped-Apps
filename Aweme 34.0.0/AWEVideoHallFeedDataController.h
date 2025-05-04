@interface AWEVideoHallFeedDataController : AWEBaseDataController
@property (nonatomic) q loop;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadmoreWithCompletion:;
- (void)fetchWithCompletion:fetchType:;
- (void)refreshWithCompletion:;
- (long long)loop;
- (void)setLoop:;
@end
