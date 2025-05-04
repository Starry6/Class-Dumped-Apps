@interface AWEMusicLunaUserInfoModel : MTLModel
@property (nonatomic) BOOL isLunaUser;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) NSString mappingSongId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsLunaUser:;
- (void)setMappingSongId:;
- (BOOL)isLunaUser;
- (id)mappingSongId;
- (void).cxx_destruct;
- (BOOL)isFavorite;
- (void)setIsFavorite:;
+ (id)JSONKeyPathsByPropertyKey;
@end
