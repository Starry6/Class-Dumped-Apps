@interface BDUGLuckyDogToastManager : NSObject
@property (nonatomic) q lastPopUpId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLastPopUpId:;
- (id)__imageWithImageName:;
- (void)__requestImageWithModel:completion:;
- (id)defaultParentView;
- (void)dismissToast:animated:;
- (long long)lastPopUpId;
- (void)showDefaultToastWithParams:;
- (void)showDefaultToastWithText:;
- (void)showToast:model:;
+ (void)startupDialogModule;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
