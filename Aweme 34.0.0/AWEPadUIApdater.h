@interface AWEPadUIApdater : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)performPadAction:;
- (void)performPadUILayoutUpdate:;
- (void)performPlayInteractionLeftElementDynamicLayout:;
- (BOOL)performOptimizeAwemeDetailTableReload:;
- (void)performPlayInteractionProgressSliderLayout:;
- (void)performPlayInteractionRichProgressSliderLayout:;
- (void)performPlayInteractionBottomBarLayout:;
- (BOOL)enable;
@end
