@interface ASCDefaultLockupTheme : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)copyWithZone:;
- (void)applyToLockupContentView:compatibleWithTraitCollection:;
+ (id)sharedTheme;
+ (id)preferredIconSizeForSize:compatibleWithTraitCollection:;
+ (long long)preferredLabelAlignmentForSize:;
+ (id)headingLabelColorForView:;
+ (id)headingLabelFontForSize:compatibleWithTraitCollection:;
+ (id)titleLabelFontForView:compatibleWithTraitCollection:;
+ (long long)numberOfLinesInTitleForSize:compatibleWithTraitCollection:;
+ (id)subtitleLabelFontForView:compatibleWithTraitCollection:;
+ (long long)numberOfLinesInSubtitleForSize:compatibleWithTraitCollection:;
+ (void)updateOfferStatusLabelColorForView:;
+ (id)offerStatusLabelFontForSize:compatibleWithTraitCollection:;
@end
