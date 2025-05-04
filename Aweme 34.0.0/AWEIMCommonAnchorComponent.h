@interface AWEIMCommonAnchorComponent : AWEIMFlexComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)handleTapWithAnchorView:;
- (void)updateHeightWithAnchorView:;
- (void)presenter:didUpdateWithView:;
+ (BOOL)canCreateComponentWithContext:;
@end
