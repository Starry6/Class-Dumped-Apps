@interface AWEHotSpotBrandUpgradeImages : NSObject
+ (id)topHotSpotIcon:otherParams:;
+ (id)topHotSpotIconWithHotSpotModel:otherParams:;
+ (id)gradientTextWithHotSpotModel:otherParams:;
+ (id)hotSpotFireIcon;
+ (id)gradientTextWithChineseText:customTopX:;
+ (id)topHotSpotCoverForNewBrandWithHotSpotModel:otherParams:;
+ (id)moreViewIconWithBoardTabModel:otherParams:;
+ (id)hotSpotIconNameWithBoardType:boardSubType:;
+ (id)styledTextShadowWithThemeStyle:;
+ (id)labelForStyledText:strokeColor:strokeWidth:;
+ (id)styledTopXRank:textSpace:prefixText:;
+ (id)styledChineseText:textLayouts:;
+ (id)styledTopXRank:textSpace:;
+ (id)styledCustomTopXRank:textSpace:;
+ (id)styledTextLabelWithArrowWithBoardTabModel:textLayouts:otherParams:;
+ (id)styledTextLabelWithRank:boardTabModel:textLayouts:otherParams:;
+ (id)iconImageWithBoardTabModel:themeStyle:iconType:;
+ (id)backgroundGradientLayerWithFrame:themeStyle:;
+ (id)gradientLayerWithFrame:layouts:;
+ (BOOL)shouldShowTopXWithBoardTabModel:;
+ (id)topTitleGradientImageWithRank:prefixText:;
+ (id)chineseTextWithText:textLayouts:;
+ (id)topXTextWithRank:textLayouts:;
+ (id)textGradientLayerWithFrame:layouts:;
+ (id)chineseTopXTextWithBoardTabModel:rank:textLayouts:;
+ (id)tintGradientColorWithView:layouts:;
+ (id)styledTextLabelWithCustomTopXRank:boardTabModel:textLayouts:otherParams:;
+ (id)gradientTextWithBoardTabModel:rank:layoutsType:otherParams:;
+ (id)leadingIconForVertialBoardTabModel:;
+ (id)sperateIconForVertialBoardTabModel:;
+ (id)topTitleGradientImageWithRank:;
+ (id)detailMoreViewIconWithBoardTabModel:otherParams:;
@end
