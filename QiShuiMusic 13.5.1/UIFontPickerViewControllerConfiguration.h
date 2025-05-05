@interface UIFontPickerViewControllerConfiguration : NSObject
@property (nonatomic) BOOL _hideSearchBar;
@property (nonatomic) UIColor _tintColor;
@property (nonatomic) BOOL includeFaces;
@property (nonatomic) BOOL displayUsingSystemFont;
@property (nonatomic) I filteredTraits;
@property (nonatomic) NSPredicate filteredLanguagesPredicate;
- (void)_setTintColor:;
- (id)initWithCoder:;
- (id)_tintColor;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)includeFaces;
- (void)setIncludeFaces:;
- (BOOL)displayUsingSystemFont;
- (void)setDisplayUsingSystemFont:;
- (unsigned int)filteredTraits;
- (void)setFilteredTraits:;
- (id)filteredLanguagesPredicate;
- (void)setFilteredLanguagesPredicate:;
- (BOOL)_hideSearchBar;
- (void)_setHideSearchBar:;
+ (BOOL)supportsSecureCoding;
+ (id)filterPredicateForFilteredLanguages:;
@end
