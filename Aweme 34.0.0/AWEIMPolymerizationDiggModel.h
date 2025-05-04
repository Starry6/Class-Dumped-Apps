@interface AWEIMPolymerizationDiggModel : AWEBaseApiModel
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) AWEUserModel userModel;
@property (nonatomic) NSNumber createTime;
@property (nonatomic) NSString tagText;
@property (nonatomic) BOOL isOnline;
- (id)aweme;
- (void)setAweme:;
- (void)setTagText:;
- (id)tagText;
- (id)createTime;
- (void)setCreateTime:;
- (void)setUserModel:;
- (BOOL)isOnline;
- (void).cxx_destruct;
- (id)userModel;
- (void)setIsOnline:;
+ (id)JSONKeyPathsByPropertyKey;
@end
