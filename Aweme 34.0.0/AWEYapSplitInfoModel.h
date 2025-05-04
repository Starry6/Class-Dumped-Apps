@interface AWEYapSplitInfoModel : AWEBaseApiModel
@property (nonatomic) NSString orderNo;
@property (nonatomic) NSString bizCode;
@property (nonatomic) NSString bizMsg;
@property (nonatomic) NSString title;
@property (nonatomic) q splitStatus;
@property (nonatomic) q userRole;
@property (nonatomic) q userRoleStatus;
@property (nonatomic) AWEYapSplitDetailModel detailInfo;
- (long long)userRole;
- (id)bizCode;
- (id)orderNo;
- (long long)userRoleStatus;
- (id)detailInfo;
- (void)setBizCode:;
- (id)bizMsg;
- (void)setDetailInfo:;
- (void)setOrderNo:;
- (void)setBizMsg:;
- (long long)splitStatus;
- (void)setSplitStatus:;
- (void)setUserRole:;
- (void)setUserRoleStatus:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)detailInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
