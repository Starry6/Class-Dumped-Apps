@interface AWEIMSkylightFlashBackInfoDataModel : AWEIMSkylightBizInfoDataModel
@property (nonatomic) Q flashBackType;
@property (nonatomic) NSString storageIdentifier;
@property (nonatomic) AWEIMSkylightBizInfoDataModel originBizModel;
@property (nonatomic) BOOL isFromLocal;
@property (nonatomic) BOOL isOwnPhoto;
@property (nonatomic) BOOL onlyThemes;
- (id)getContentDict;
- (BOOL)isFromLocal;
- (BOOL)isOwnPhoto;
- (unsigned long long)flashBackType;
- (BOOL)onlyThemes;
- (id)originBizModel;
- (void)setOriginBizModel:;
- (void)setOnlyThemes:;
- (void)setFlashBackType:;
- (void).cxx_destruct;
- (id)initWithDictionary:;
- (void)setStorageIdentifier:;
- (id)storageIdentifier;
@end
