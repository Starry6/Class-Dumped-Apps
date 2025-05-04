@interface AWELandscapeInteractionViewUtil : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (double)bottomContainerHeight;
+ (double)topBackButtonWidth;
+ (double)horizonOffset;
+ (BOOL)shouldShowMixButtonWithModel:;
+ (double)feedShareHorizonOffsetWithModel:;
+ (double)progressSliderHeight;
+ (double)progressSliderTopOffset;
+ (double)progressSliderBottomOffset;
+ (double)bottomContainerOffset;
+ (double)gradientViewHeight;
+ (double)videoHorizonOffset;
+ (id)screenPlayButtonSize;
@end
