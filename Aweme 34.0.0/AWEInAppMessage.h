@interface AWEInAppMessage : NSObject
@property (nonatomic) NSRecursiveLock lock;
@property (nonatomic) AWEInAppMessageView currentView;
@property (nonatomic) NSTimer timer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didEndDragging:;
- (void)setTimer:;
- (id)timer;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
- (void)timerFired:;
- (void)setCurrentView:;
- (id)currentView;
+ (void)showOnView:config:showBlock:actionBlock:dismissBlock:;
+ (void)show:showBlock:actionBlock:dismissBlock:;
+ (id)sharedInstance;
+ (void)dismiss;
@end
