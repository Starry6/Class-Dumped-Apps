@interface AWEMusicStreamingImpl.LunaPopup : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString btnText;
@property (nonatomic) _TtC21AWEMusicStreamingImpl11LunaURLInfo backgroundPic;
@property (nonatomic) q popupType;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) NSString secondTitle;
- (id)btnText;
- (void)setBtnText:;
- (id)backgroundPic;
- (void)setBackgroundPic:;
- (long long)popupType;
- (void)setPopupType:;
- (id)secondTitle;
- (void)setSecondTitle:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)subtitle;
- (void)setSubtitle:;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
