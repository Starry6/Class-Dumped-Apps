@interface AWESECPageInterest : NSObject
@property (nonatomic) BOOL hmdUITrackerWorking;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupHMDUpdate;
- (void)hmdSceneDidChange;
- (void)setHmdUITrackerWorking:;
- (BOOL)hmdUITrackerWorking;
- (void)setup;
+ (id)shared;
+ (void)viewController:viewDidAppear:;
+ (void)viewController:viewDidDisappear:;
@end
