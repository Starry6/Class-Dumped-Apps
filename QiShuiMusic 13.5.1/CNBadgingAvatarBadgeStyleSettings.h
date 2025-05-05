@interface CNBadgingAvatarBadgeStyleSettings : NSObject
@property (nonatomic) q position;
@property (nonatomic) UIColor color;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) q cropStyle;
@property (nonatomic) q contentMode;
- (void)setPosition:;
- (long long)position;
- (id)init;
- (void)setBackgroundColor:;
- (long long)contentMode;
- (id)backgroundColor;
- (void)setColor:;
- (long long)cropStyle;
- (id)color;
- (void).cxx_destruct;
- (void)setCropStyle:;
- (void)setContentMode:;
- (BOOL)isEqual:;
- (id)initWithPosition:color:backgroundColor:cropStyle:;
- (long long)cnuiBadgePosition;
- (unsigned long long)cnuiCropStyle;
+ (long long)cnuiBadgePosition:;
+ (unsigned long long)cnuiBadgeCropStyle:;
+ (id)markedForSyndicationBadgeSettings;
+ (id)doNotDisturbBadgeSettings;
@end
