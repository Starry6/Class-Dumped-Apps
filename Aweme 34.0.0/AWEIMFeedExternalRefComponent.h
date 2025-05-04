@interface AWEIMFeedExternalRefComponent : AWEIMFlexComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)didTappedCover;
- (void)showMediaDetail;
- (BOOL)p_shouldShowPlayIconWithExternalRef:;
- (id)presenter;
+ (BOOL)canCreateComponentWithContext:;
@end
