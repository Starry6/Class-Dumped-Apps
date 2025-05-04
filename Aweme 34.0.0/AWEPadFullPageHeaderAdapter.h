@interface AWEPadFullPageHeaderAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)headerMarginWithView:;
- (void)updateHeaderInfoViewLayout;
- (double)sliderContainerHeightIfLandScapeWithMargin:;
- (double)sliderContainerHeightOffsetVerticalWithMargin:;
- (double)sliderContainerWidthWithView:;
- (void)performUpdateHeaderUI:;
- (id)weakTarget;
+ (Class)weakTargetClass;
@end
