@interface BDUGLuckyTabConf : BDUGLuckyBDModel
@property (nonatomic) NSString iconUrl;
@property (nonatomic) UIImage iconImage;
@property (nonatomic) NSString iconContent;
@property (nonatomic) NSString iconSize;
- (void)setIconContent:;
- (id)iconUrl;
- (id)iconContent;
- (void)setIconUrl:;
- (void)setIconSize:;
- (id)iconSize;
- (void)setIconImage:;
- (void).cxx_destruct;
- (id)hashString;
- (id)iconImage;
- (id)copyWithZone:;
+ (id)modelCustomPropertyMapper;
@end
