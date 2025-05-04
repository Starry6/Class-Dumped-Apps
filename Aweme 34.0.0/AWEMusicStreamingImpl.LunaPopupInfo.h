@interface AWEMusicStreamingImpl.LunaPopupInfo : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) q popupType;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSString btnText;
- (id)btnText;
- (void)setBtnText:;
- (long long)popupType;
- (void)setPopupType:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
