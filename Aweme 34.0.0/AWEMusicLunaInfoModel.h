@interface AWEMusicLunaInfoModel : AWEBaseDataModel
@property (nonatomic) BOOL isLunaUser;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) BOOL hasCopyright;
@property (nonatomic) q mappingSongIdNum;
@property (nonatomic) NSString mappingSongId;
- (void)setIsLunaUser:;
- (void)setHasCopyright:;
- (void)setMappingSongIdNum:;
- (void)setMappingSongId:;
- (BOOL)isLunaUser;
- (id)mappingSongId;
- (long long)mappingSongIdNum;
- (void).cxx_destruct;
- (BOOL)isFavorite;
- (void)setIsFavorite:;
- (BOOL)hasCopyright;
+ (id)JSONKeyPathsByPropertyKey;
@end
