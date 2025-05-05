@interface UIInputViewSetPlacementUndocked : UIInputViewSetPlacement
@property (nonatomic) {CGPoint=dd} normalizedOffset;
@property (nonatomic) {UIEdgeInsets=dddd} chromeBuffer;
- (void)setOffset:;
- (id)initWithCoder:;
- (id)remoteIntrinsicContentSizeForInputViewInSet:includingIAV:;
- (void)encodeWithCoder:;
- (id)verticalConstraintForInputViewSet:hostView:containerView:;
- (Class)applicatorClassForKeyboard:;
- (BOOL)inputViewWillAppear;
- (BOOL)isUndocked;
- (BOOL)isEqual:;
- (id)applicatorInfoForOwner:;
- (void)updateChromeBuffer;
- (double)heightOfInputViews:;
- (id)chromeBuffer;
- (void)setChromeBuffer:;
- (id)normalizedOffset;
- (void)setNormalizedOffset:;
+ (id)computeOffsetForOffset:withSize:chromeBuffer:onScreenSize:;
+ (BOOL)supportsSecureCoding;
+ (id)infoWithPoint:;
+ (id)placementWithUndockedOffset:chromeBuffer:;
@end
