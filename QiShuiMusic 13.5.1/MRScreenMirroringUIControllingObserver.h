@interface MRScreenMirroringUIControllingObserver : MRScreenMirroringObserver
@property (nonatomic) <MRScreenMirroringQuickControlsUIControllable> uiController;
@property (nonatomic) MRScreenMirroringObserver internalObserver;
- (id)internalObserver;
- (id)init;
- (void).cxx_destruct;
- (void)_mirrorStateChanged:screenType:;
- (id)uiController;
- (void)setUiController:;
@end
