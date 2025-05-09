@interface FLEXShortcutsSection : FLEXTableViewSection
@property (nonatomic) NSArray titles;
@property (nonatomic) NSArray subtitles;
@property (nonatomic) NSArray allTitles;
@property (nonatomic) NSArray allSubtitles;
@property (nonatomic) NSArray shortcuts;
@property (nonatomic) NSArray allShortcuts;
@property (nonatomic) q numberOfLines;
@property (nonatomic) @ object;
@property (nonatomic) BOOL cacheSubtitles;
@property (nonatomic) BOOL isNewSection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithObject:titles:subtitles:;
- (id)initWithObject:rows:isNewSection:;
- (void)setCacheSubtitles:;
- (long long)accessoryTypeForRow:;
- (void)setFilterText:;
- (void)reloadData;
- (id)title;
- (long long)numberOfRows;
- (BOOL)canSelectRow:;
- (id)didSelectRowAction:;
- (id)viewControllerToPushForRow:;
- (id)didPressInfoButtonAction:;
- (id)reuseIdentifierForRow:;
- (void)configureCell:forRow:;
- (id)titleForRow:;
- (id)subtitleForRow:;
- (BOOL)isNewSection;
- (long long)numberOfLines;
- (id)object;
- (BOOL)cacheSubtitles;
- (id)titles;
- (void)setTitles:;
- (id)subtitles;
- (void)setSubtitles:;
- (id)allTitles;
- (void)setAllTitles:;
- (id)allSubtitles;
- (void)setAllSubtitles:;
- (id)shortcuts;
- (void)setShortcuts:;
- (id)allShortcuts;
- (void).cxx_destruct;
+ (id)forObject:rowTitles:;
+ (id)forObject:rowTitles:rowSubtitles:;
+ (id)forObject:rows:;
+ (id)forObject:additionalRows:;
+ (id)forObject:;
@end
