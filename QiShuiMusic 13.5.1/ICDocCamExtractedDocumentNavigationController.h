@interface ICDocCamExtractedDocumentNavigationController : UINavigationController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)prepareForDismissal;
- (id)initWithDelegate:documentInfoCollection:imageCache:currentIndex:mode:;
@end
