@interface AWEIMMessageImage_FormatBrandAD_Plugin : AWEIMFlexComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cellVisibleLifeCycleChanged:;
- (BOOL)canHandleTapCoverAction;
- (void)handleDidTapCoverAction;
- (void)adTrackWithEventLabel:;
+ (BOOL)canCreateComponentWithContext:;
@end
