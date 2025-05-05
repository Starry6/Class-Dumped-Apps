@interface SFSaveToFilesActivity : _SFActivity
@property (nonatomic) BOOL supportsDownloads;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activityType;
- (void)saveToFilesOperation:didFinishWithSuccess:;
- (BOOL)saveToFilesOperationSupportsDownloads:;
- (void).cxx_destruct;
- (void)saveToFilesOperation:presentViewController:;
- (BOOL)_managesOwnPresentation;
- (BOOL)_presentActivityOnViewController:animated:completion:;
- (BOOL)_dismissActivityFromViewController:animated:completion:;
- (id)customizationControllerForSaveToFilesOperation:;
- (BOOL)saveToFilesOperationShouldDismissViewControllerAfterCompletion:;
- (id)initWithActivityItemProviderCollection:customizationController:;
- (BOOL)supportsDownloads;
- (void)setSupportsDownloads:;
@end
