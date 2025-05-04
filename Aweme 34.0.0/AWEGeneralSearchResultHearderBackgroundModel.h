@interface AWEGeneralSearchResultHearderBackgroundModel : AWESearchBackgroundModel
@property (nonatomic) BOOL isSearchHalfScreenMode;
@property (nonatomic) BOOL enableAlphaBackground;
- (void)setEnableAlphaBackground:;
- (BOOL)enableAlphaBackground;
- (BOOL)isSearchHalfScreenMode;
- (void)setIsSearchHalfScreenMode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
