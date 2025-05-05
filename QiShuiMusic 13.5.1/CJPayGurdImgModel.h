@interface CJPayGurdImgModel : JSONModel
@property (nonatomic) BOOL enableGurdImg;
@property (nonatomic) NSString cdnUrl;
@property (nonatomic) NSArray iosImgChannelList;
- (id)cdnUrl;
- (BOOL)enableGurdImg;
- (id)iosImgChannelList;
- (void)setCdnUrl:;
- (void)setEnableGurdImg:;
- (void)setIosImgChannelList:;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
