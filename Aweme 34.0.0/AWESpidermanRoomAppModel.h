@interface AWESpidermanRoomAppModel : NSObject
@property (nonatomic) NSString appId;
@property (nonatomic) NSString appName;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString iconUrl;
@property (nonatomic) NSString shareImg;
@property (nonatomic) BOOL isNew;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)shareImg;
- (void)setShareImg:;
- (BOOL)isNew;
- (id)appId;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (void)setAppName:;
- (void)setIsNew:;
- (id)appName;
- (id)copyWithZone:;
- (void)setAppId:;
+ (id)modelCustomPropertyMapper;
@end
