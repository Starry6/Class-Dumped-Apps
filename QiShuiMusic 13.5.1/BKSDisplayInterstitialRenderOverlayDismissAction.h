@interface BKSDisplayInterstitialRenderOverlayDismissAction : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BKSDisplayRenderOverlayDescriptor overlayDescriptor;
- (void)dismiss;
- (id)initWithDescriptor:;
- (id)overlayDescriptor;
- (id)succinctDescriptionBuilder;
- (void)dismissWithAnimation:;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:;
- (id)descriptionWithMultilinePrefix:;
@end
