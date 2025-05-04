@interface AWENewScanImpl.AIGCQRCodeListModel : AWEBaseApiModel
@property (nonatomic) NSArray aigcCodeList;
@property (nonatomic) q selectedIndex;
@property (nonatomic) AWEURLModel qrcodeURL;
@property (nonatomic) AWEURLModel avatarURL;
- (id)avatarURL;
- (void)setAvatarURL:;
- (id)qrcodeURL;
- (void)setQrcodeURL:;
- (id)aigcCodeList;
- (void)setAigcCodeList:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setSelectedIndex:;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)qrcodeURLJSONTransformer;
+ (id)avatarURLJSONTransformer;
+ (id)aigcCodeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
