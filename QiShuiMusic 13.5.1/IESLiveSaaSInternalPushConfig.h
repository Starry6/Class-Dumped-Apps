@interface IESLiveSaaSInternalPushConfig : NSObject
@property (nonatomic) double margin;
@property (nonatomic) double cornerRadius;
@property (nonatomic) UIColor textColor;
@property (nonatomic) UIColor descTextColor;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIColor avatarBorderFromColor;
@property (nonatomic) UIColor avatarBorderToColor;
- (id)avatarBorderFromColor;
- (id)avatarBorderToColor;
- (id)descTextColor;
- (void)setAvatarBorderFromColor:;
- (void)setAvatarBorderToColor:;
- (void)setDescTextColor:;
- (id)init;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (double)margin;
- (void)setMargin:;
- (void)setTextColor:;
- (void)setCornerRadius:;
- (void).cxx_destruct;
- (id)textColor;
- (double)cornerRadius;
@end
