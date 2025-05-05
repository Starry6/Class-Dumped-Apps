@interface ISTransitionApplier : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)animationDidStop:finished:;
- (void)applyOutputInfo:withTransitionOptions:toPhotoLayer:videoLayer:completion:;
- (void)applyScale:withTransitionOptions:toPhotoLayer:videoLayer:completion:;
- (void)_applyAlpha:blurRadius:toLayer:withTransitionOptions:completion:;
- (void)_applyScale:toLayer:withTransitionOptions:completion:;
- (void)setValue:forKeyPath:ofLayer:withTransitionOptions:completion:;
+ (id)defaultApplier;
@end
