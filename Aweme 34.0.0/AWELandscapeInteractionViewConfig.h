@interface AWELandscapeInteractionViewConfig : NSObject
@property (nonatomic) AWELandscapeCellContext cellContext;
- (id)middleElementArray;
- (id)controllerBelowBaseUIArray;
- (id)bottomRightElementArray;
- (id)initWithCellContext:;
- (id)buildInteractionViewConfig;
- (id)topLeftElementArray;
- (id)topRightElementArray;
- (id)videoInfoElementArray;
- (id)bottomLeftElementArray;
- (void)registerElementToViewConfig:;
- (id)controllerAboveBaseUIArray;
- (void)registerControllerToViewConfig:;
- (id)customElementDict;
- (id)filterElementIfNeededWithArray:;
- (id)customControllerDict;
- (id)filterControllerIfNeededWithArray:;
- (void).cxx_destruct;
- (void)setCellContext:;
- (id)cellContext;
@end
