@interface AWEPOICoverImageModel : AWEBaseApiModel
@property (nonatomic) <IESLLFuseURLModel> f_imageLarge;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEURLModel imageLarge;
@property (nonatomic) AWEURLModel imageThumb;
@property (nonatomic) AWEURLModel imageSmall;
- (id)imageThumb;
- (void)setImageThumb:;
- (id)imageLarge;
- (id)f_imageLarge;
- (void)setImageLarge:;
- (id)imageSmall;
- (void)setImageSmall:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
