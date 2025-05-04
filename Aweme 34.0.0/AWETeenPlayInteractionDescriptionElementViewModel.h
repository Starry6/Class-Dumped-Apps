@interface AWETeenPlayInteractionDescriptionElementViewModel : AWETeenPlayInteractionBaseElementViewModel
- (void)onDescriptionLabelClicked:url:;
- (void)onDescriptionLabelClicked:url:extraInfo:;
- (void)interactor_onDescriptionLabelClicked:url:;
- (void)router_onDescriptionLabelClicked:url:;
- (void)interactor_onDescriptionLabelClicked:url:extraInfo:;
+ (unsigned long long)pureDescriptionStyle;
@end
