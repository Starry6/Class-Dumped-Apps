@interface IESLiveCaptureAssemblyGiftInfo : NSObject
@property (nonatomic) NSString imageUrl;
@property (nonatomic) NSNumber giftId;
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSNumber price;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} giftCellFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} giftToolbarFrame;
@property (nonatomic) NSArray pluginList;
- (id)giftCellFrame;
- (id)giftId;
- (id)giftToolbarFrame;
- (id)pluginList;
- (void)setGiftCellFrame:;
- (void)setGiftId:;
- (void)setGiftToolbarFrame:;
- (void)setPluginList:;
- (void).cxx_destruct;
- (void)setSubTitle:;
- (id)subTitle;
- (id)price;
- (void)setPrice:;
- (id)imageUrl;
- (void)setImageUrl:;
- (id)mainTitle;
- (void)setMainTitle:;
@end
