@interface AWEOriginalLunaDiversionModel : AWEBaseApiModel
@property (nonatomic) NSString artistID;
@property (nonatomic) NSArray diversionBtnArray;
@property (nonatomic) AWELunaMusicianInfoModel diversionPopViewModel;
- (id)diversionBtnArray;
- (void)setDiversionBtnArray:;
- (id)diversionPopViewModel;
- (void)setDiversionPopViewModel:;
- (void).cxx_destruct;
- (id)artistID;
- (void)setArtistID:;
+ (id)diversionBtnArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
