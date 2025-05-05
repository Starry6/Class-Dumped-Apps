@interface IESECShopSellingPointTagConfig : NSObject
@property (nonatomic) NSArray contents;
@property (nonatomic) IESECShopSellingPointStyle style;
@property (nonatomic) IESECShopSellingPointStyle livingStyle;
- (void)setLivingStyle:;
- (id)livingStyle;
- (id)contents;
- (void)setStyle:;
- (void)setContents:;
- (void).cxx_destruct;
- (id)style;
@end
