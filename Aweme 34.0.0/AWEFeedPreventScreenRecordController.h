@interface AWEFeedPreventScreenRecordController : AWEBaseController
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isPaidStreamControl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isAppear;
- (void)setIsAppear:;
- (void)configureCell:withModel:atIndexPath:;
- (void)screenCapturedDidChange:;
- (id)shouldPreventPlayCell:indexPath:;
- (BOOL)shouldPreventScreenRecord;
- (void)beforeReturnFromPlay;
- (void)popupToastIfNeeded;
- (BOOL)isPaidMixScreenRecording;
- (void)setIsPaidStreamControl:;
- (BOOL)isPaidStreamControl;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void)scrollViewDidEndDecelerating:;
- (void)viewDidAppear:;
@end
