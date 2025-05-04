@interface AWELongVideoPlusPlayInteractionElementConfigs : AWEPlayInteractionElementConfigs
- (id)customLeftContainerElement:;
- (id)customRightContainerElement:;
- (void)setupBottomContainer:;
- (id)getUnusedElementArray;
- (id)getReorderElementArray;
- (id)getLongVideoElementArray;
- (id)getABTestForbiddenLeftElementArray;
- (id)getCommonForbiddenElementArray;
- (void)rankLeftContainerElement:;
- (id)getABTestForbiddenRightElementArray;
- (id)aAWELongVideoPlusPlayInteractionElementConfigsAdapter;
+ (Class)aAWELongVideoPlusPlayInteractionElementConfigsAdapterClass;
@end
