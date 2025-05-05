@interface SYNotesActivationObserver : NSObject
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL hasInitialVisibility;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} visibleFrame;
@property (nonatomic) @? handler;
@property (nonatomic) FBSDisplayLayoutMonitor _displayLayoutMonitor;
- (id)visibleFrame;
- (void)setVisible:;
- (void)dealloc;
- (id)initWithHandler:;
- (void)setHandler:;
- (void)setVisibleFrame:;
- (void)startObservingNotes;
- (id)handler;
- (void)_notifyHandlerOfVisibility;
- (void).cxx_destruct;
- (BOOL)hasInitialVisibility;
- (id)_displayLayoutMonitor;
- (void)_startObservingNotes;
- (BOOL)isVisible;
- (void)set_displayLayoutMonitor:;
- (void)setHasInitialVisibility:;
- (void)_updateNotesVisibilityFromLayout:;
@end
