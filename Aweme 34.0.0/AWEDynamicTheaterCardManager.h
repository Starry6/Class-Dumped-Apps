@interface AWEDynamicTheaterCardManager : NSObject
+ (id)uiConfig;
+ (id)findObjectWithParamNameArray:from:;
+ (id)findObjectWithParamNameArray:from:renderType:;
+ (id)currentCardSectionItem:cardDescription:;
+ (id)currentCardSectionItems:cardDescription:;
+ (BOOL)isCardVisible:;
@end
