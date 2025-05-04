@interface AWENearbyC2CellExpressData : AWEBaseApiModel
@property (nonatomic) AWENearbyC2CellTextData title;
@property (nonatomic) AWENearbyVideoTags subTitle;
@property (nonatomic) NSArray bottom;
- (void)setSubTitle:;
- (id)subTitle;
- (void)setBottom:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)bottom;
+ (BOOL)automaticallyDefaultMapping;
+ (id)bottomJSONTransformer;
@end
