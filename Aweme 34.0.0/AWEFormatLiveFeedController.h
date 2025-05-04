@interface AWEFormatLiveFeedController : UIViewController
- (void)updateModelWithModel:;
- (void)vcWillDisplay;
- (void)vcEndDisplay;
- (void)vcPrepareForDisplay;
- (void)preloadWithModel:;
- (void)play;
- (void)pause;
- (void)enterInnerRoom;
- (void)willLeaveInnerRoom;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
