@interface IESIMUserFollowersDetailModel : IESIMBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString iconURLString;
@property (nonatomic) NSNumber fansCount;
@property (nonatomic) NSString openURL;
@property (nonatomic) NSString appleID;
@property (nonatomic) NSString downloadURLString;
@property (nonatomic) NSString packageName;
@property (nonatomic) NSString appName;
- (id)downloadURLString;
- (id)fansCount;
- (BOOL)isDouyin;
- (BOOL)isDuanzi;
- (BOOL)isHuoshan;
- (BOOL)isToutiao;
- (void)setDownloadURLString:;
- (void)setFansCount:;
- (void)setOpenURL:;
- (id)appleID;
- (void)setName:;
- (void)setAppName:;
- (id)appName;
- (void)setAppleID:;
- (id)initWithDict:;
- (id)packageName;
- (void).cxx_destruct;
- (id)name;
- (id)openURL;
- (id)iconURLString;
- (void)setIconURLString:;
- (void)setPackageName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
