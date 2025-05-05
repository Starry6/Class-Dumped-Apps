@interface PSCloudSyncController : PSListController
@property (nonatomic) <PSCloudSyncPopoverDelegate> delegate;
- (id)specifiers;
- (void)setDelegate:;
- (id)cloudSyncEnabled;
- (void)setCloudSyncEnabled:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)viewWillAppear:;
@end
