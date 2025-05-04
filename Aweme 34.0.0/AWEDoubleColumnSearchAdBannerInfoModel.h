@interface AWEDoubleColumnSearchAdBannerInfoModel : AWEBaseApiModel
@property (nonatomic) NSString desc;
@property (nonatomic) NSString coverImageUrl;
@property (nonatomic) NSString openUrl;
@property (nonatomic) BOOL isSelected;
- (id)openUrl;
- (void)setOpenUrl:;
- (id)coverImageUrl;
- (void)setCoverImageUrl:;
- (void)setIsSelected:;
- (BOOL)isSelected;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
