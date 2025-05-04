@interface AWEIMInnerPlaceholderComponent : AWEIMFlexComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (BOOL)enableDisplay;
+ (BOOL)canCreateComponentWithContext:;
@end
