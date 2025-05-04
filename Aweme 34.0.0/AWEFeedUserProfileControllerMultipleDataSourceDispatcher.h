@interface AWEFeedUserProfileControllerMultipleDataSourceDispatcher : AWEControllerEvent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)authorForUserProfileViewControllerWithModel:;
- (id)itemIDForUserProfileViewControllerWithModel:;
- (id)urlParamsForUserProfileViewControllerWithModel:;
@end
