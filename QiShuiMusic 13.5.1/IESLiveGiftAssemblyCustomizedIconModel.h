@interface IESLiveGiftAssemblyCustomizedIconModel : NSObject
@property (nonatomic) NSString baseInfoString;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} giftCellFrame;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) HTSLiveImage defaultImage;
@property (nonatomic) q pluginTotalPrice;
- (id)baseInfoString;
- (id)giftCellFrame;
- (long long)pluginTotalPrice;
- (void)setBaseInfoString:;
- (void)setGiftCellFrame:;
- (void)setPluginTotalPrice:;
- (void)setImage:;
- (void).cxx_destruct;
- (id)image;
- (id)defaultImage;
- (void)setDefaultImage:;
@end
