@interface AWEIMSkylightCellAvatarContainerComponent : AWEIMSkylightBaseComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (id)avatarContainerView;
+ (BOOL)canCreateComponentWithContext:;
@end
