@interface AWEPOIImageUploadModel : AWEBaseApiModel
@property (nonatomic) <IESLLFusePOICoverImageModel> f_coverImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL show;
@property (nonatomic) NSString title;
@property (nonatomic) AWEPOICoverImageModel coverImage;
- (void)setCoverImage:;
- (id)f_coverImage;
- (BOOL)show;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setShow:;
- (id)coverImage;
+ (id)JSONKeyPathsByPropertyKey;
@end
