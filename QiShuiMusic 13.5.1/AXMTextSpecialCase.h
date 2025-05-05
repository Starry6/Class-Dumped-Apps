@interface AXMTextSpecialCase : NSObject
- (id)nutritionLabelKeywords;
- (long long)nutritionLabelKeywordCountMinimum;
- (id)detectSpecialCase:preferredLocales:;
- (BOOL)detectNutritionLabel:;
@end
