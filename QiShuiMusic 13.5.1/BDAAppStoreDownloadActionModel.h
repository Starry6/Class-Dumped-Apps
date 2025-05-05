@interface BDAAppStoreDownloadActionModel : BDAAppStoreActionModel
@property (nonatomic) q skoverlayPos;
@property (nonatomic) UIViewController containerController;
@property (nonatomic) @? presentCompletion;
@property (nonatomic) @? dismissCompletion;
@property (nonatomic) @? willPresentCompletion;
- (id)containerController;
- (id)dismissCompletion;
- (id)presentCompletion;
- (void)setContainerController:;
- (void)setDismissCompletion:;
- (void)setPresentCompletion:;
- (void)setSkoverlayPos:;
- (void)setWillPresentCompletion:;
- (long long)skoverlayPos;
- (id)willPresentCompletion;
- (void).cxx_destruct;
@end
