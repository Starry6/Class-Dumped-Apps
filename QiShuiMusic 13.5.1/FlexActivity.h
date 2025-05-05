@interface FlexActivity : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString subTabTitle;
@property (nonatomic) NSString relationStatusText;
@property (nonatomic) NSInteger relationStatus;
@property (nonatomic) FlexActivity_BasicInfo basicInfo;
@property (nonatomic) BOOL hasBasicInfo;
@property (nonatomic) FlexActivity_MoreInfo moreInfo;
@property (nonatomic) BOOL hasMoreInfo;
@property (nonatomic) FlexActivity_SubTabConfig subTabConfig;
@property (nonatomic) BOOL hasSubTabConfig;
+ (id)descriptor;
@end
