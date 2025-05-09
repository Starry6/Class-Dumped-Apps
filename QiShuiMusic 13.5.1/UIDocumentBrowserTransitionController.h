@interface UIDocumentBrowserTransitionController : NSObject
@property (nonatomic) BOOL transitionDidFinish;
@property (nonatomic) <DOCServiceTransitionProtocol> transitionController;
@property (nonatomic) NSOperationQueue transitionControllerQueue;
@property (nonatomic) NSProgress loadingProgress;
@property (nonatomic) UIView targetView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_commonInit;
- (void)animateTransition:;
- (id)init;
- (double)transitionDuration:;
- (void)dealloc;
- (id)targetView;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)transitionController;
- (id)loadingProgress;
- (void)setLoadingProgress:;
- (void)setTransitionController:;
- (void).cxx_destruct;
- (void)setTargetView:;
- (id)initWithItem:documentBrowserProxy:referenceView:;
- (id)initWithItemURL:documentBrowserProxy:referenceView:;
- (BOOL)transitionDidFinish;
- (void)setTransitionDidFinish:;
- (id)transitionControllerQueue;
- (void)setTransitionControllerQueue:;
@end
