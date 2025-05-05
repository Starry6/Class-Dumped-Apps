@interface WBSFormToABBinder : NSObject
+ (id)allSynonymsForMatch:formAppearsToBeChinese:;
+ (id)specifierForLabel:;
+ (id)specifierForAutocompleteToken:;
+ (unsigned long long)indexOfBestMatchForString:inArray:startingPosition:;
+ (id)addressBookFieldLabelPatternMatchers;
+ (id)emailFieldLabelPatternMatchers;
@end
