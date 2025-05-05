@interface MPMutableArtworkColorAnalysis : MPArtworkColorAnalysis
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIColor primaryTextColor;
@property (nonatomic) UIColor secondaryTextColor;
@property (nonatomic) BOOL backgroundColorLight;
@property (nonatomic) BOOL primaryTextColorLight;
@property (nonatomic) BOOL secondaryTextColorLight;
- (void)setPrimaryTextColor:;
- (void)setBackgroundColor:;
- (void)setPrimaryTextColorLight:;
- (void)setSecondaryTextColorLight:;
- (void)setSecondaryTextColor:;
- (id)copyWithZone:;
- (void)setBackgroundColorLight:;
@end
