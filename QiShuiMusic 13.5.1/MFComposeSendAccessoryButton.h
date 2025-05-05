@interface MFComposeSendAccessoryButton : UIButton
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pointerInteraction:regionForRequest:defaultRegion:;
- (void)traitCollectionDidChange:;
- (id)pointerInteraction:styleForRegion:;
- (id)_preview;
- (id)_pointerShapeForTargetedPreview:;
+ (id)buttonWithType:;
@end
