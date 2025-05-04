@interface AWEFeedUserProfileController : AWEBaseController
@property (nonatomic) AWEFeedUserProfileControllerMultipleDataSourceDispatcher multipleDataSourceDispatcher;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userProfileViewControllerForModel:enterMethod:referString:extUrlString:;
- (id)userProfileSchemaForModel:enterMethod:referString:extUrlString:;
- (id)userProfileAuthorForModel:;
- (void)addListenerForMultipleDataSourceDispatcher:;
- (id)multipleDataSourceDispatcher;
- (void)setMultipleDataSourceDispatcher:;
- (id)userProfileSchemaForModel:enterMethod:referString:extUrlString:author:;
- (id)init;
- (void).cxx_destruct;
@end
