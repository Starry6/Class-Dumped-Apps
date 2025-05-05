@interface UIKeyboardMotionSupport : NSObject
@property (nonatomic) <UISplitKeyboardSource> masterController;
@property (nonatomic) UIScreen _intendedScreen;
@property (nonatomic) NSDictionary _options;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_intendedCanvas;
- (BOOL)_matchingOptions:;
- (id)_intendedScreen;
- (id)_options;
- (id)_initWithCanvas:options:;
- (void).cxx_destruct;
- (id)_initWithScreen:options:;
- (id)masterController;
- (void)_disconnectingController:;
- (void)_connectController:;
- (void)_updatedController;
- (void)setMasterController:;
- (void)translateToPlacement:quietly:animated:;
- (void)translateToPlacement:animated:;
- (BOOL)generateSplitNotificationForNewPlacement:;
+ (id)supportForScreen:;
+ (id)supportForUIScene:;
@end
