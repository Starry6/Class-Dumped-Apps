@interface AWEMusicStreamingImpl.AppendLaterListenDisplayInfoModel : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSString snackbarText;
@property (nonatomic) NSString snackbarFallbackText;
@property (nonatomic) NSString popviewText;
@property (nonatomic) NSString popviewFallbackText;
- (id)snackbarText;
- (void)setSnackbarText:;
- (id)snackbarFallbackText;
- (void)setSnackbarFallbackText:;
- (id)popviewText;
- (void)setPopviewText:;
- (id)popviewFallbackText;
- (void)setPopviewFallbackText:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
