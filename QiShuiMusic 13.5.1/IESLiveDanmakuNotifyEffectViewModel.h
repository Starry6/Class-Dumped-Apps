@interface IESLiveDanmakuNotifyEffectViewModel : NSObject
@property (nonatomic) NSArray backgroundImageURLS;
@property (nonatomic) NSArray backgroundColors;
@property (nonatomic) NSArray flexSetting;
@property (nonatomic) double danmakuHeight;
@property (nonatomic) NSAttributedString content;
@property (nonatomic) @ message;
- (void)setFlexSetting:;
- (id)backgroundImageURLS;
- (double)danmakuHeight;
- (id)flexSetting;
- (void)setBackgroundImageURLS:;
- (void)setDanmakuHeight:;
- (id)content;
- (void)setContent:;
- (void)setMessage:;
- (id)backgroundColors;
- (id)message;
- (void).cxx_destruct;
- (void)setBackgroundColors:;
@end
