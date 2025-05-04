@interface AWEPlayInteractionDislikeAlertManager : NSObject
@property (nonatomic) @? alertCancelBlock;
@property (nonatomic) NSDictionary trackExtra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)alertDialogDidClickMaskArea:;
- (id)trackExtra;
- (void)setTrackExtra:;
- (void)dislikeAlertOnVC:trackExtra:confirmBlock:cancelBlock:;
- (void)setAlertCancelBlock:;
- (void)trackQuitPanelDislikeWithQuitMethod:;
- (id)alertCancelBlock;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
