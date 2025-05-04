@interface AWEMusicStreamingImpl.LunaAllCommentsLikedDetail : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) _TtC21AWEMusicStreamingImpl13LunaPopupInfo popup;
@property (nonatomic) BOOL isShow;
@property (nonatomic) NSString countString;
@property (nonatomic) q count;
- (BOOL)isShow;
- (void)setIsShow:;
- (id)initWithDictionary:error:;
- (id)init;
- (long long)count;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setCountString:;
- (id)popup;
- (void)setPopup:;
- (id)countString;
+ (id)popupJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
