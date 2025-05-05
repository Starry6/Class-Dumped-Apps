@interface MPArtworkColorAnalysis : NSObject
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIColor primaryTextColor;
@property (nonatomic) UIColor secondaryTextColor;
@property (nonatomic) BOOL backgroundColorLight;
@property (nonatomic) BOOL primaryTextColorLight;
@property (nonatomic) BOOL secondaryTextColorLight;
- (void)setPrimaryTextColor:;
- (id)primaryTextColor;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (id)secondaryTextColor;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (void)setSecondaryTextColor:;
- (id)copyWithZone:;
- (id)_copyWithClass:;
- (BOOL)isBackgroundColorLight;
- (BOOL)isPrimaryTextColorLight;
- (BOOL)isSecondaryTextColorLight;
+ (BOOL)supportsSecureCoding;
@end
