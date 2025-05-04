@interface AWESearchGlobalCartModel : AWEBaseApiModel
@property (nonatomic) NSString cartListSchema;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString backGroundColor;
@property (nonatomic) NSString strokeColor;
@property (nonatomic) NSString addSuccessTextColor;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)cartListSchema;
- (void)setCartListSchema:;
- (id)backGroundColor;
- (void)setBackGroundColor:;
- (id)addSuccessTextColor;
- (void)setAddSuccessTextColor:;
- (void)setStrokeColor:;
- (id)strokeColor;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
