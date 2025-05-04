@interface AWELiveUploadMediaAuthInfoModel : IESLiveBridgeModel
@property (nonatomic) NSString ak;
@property (nonatomic) NSString sk;
@property (nonatomic) NSString st;
@property (nonatomic) NSString spaceName;
- (void)setSpaceName:;
- (id)ak;
- (id)sk;
- (void)setAk:;
- (void)setSk:;
- (void)setSt:;
- (void).cxx_destruct;
- (id)st;
- (id)spaceName;
+ (id)modelCustomPropertyMapper;
@end
