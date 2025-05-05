@interface IESLiveSaaSPBAudienceEntranceInfo : GPBMessage
@property (nonatomic) q interactType;
@property (nonatomic) NSString elemId;
@property (nonatomic) q startId;
@property (nonatomic) q status;
@property (nonatomic) NSString name;
@property (nonatomic) IESLiveSaaSPBImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) BOOL checkEntranceVisitable;
@property (nonatomic) BOOL needMetricsReport;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) NSInteger source;
@property (nonatomic) NSInteger punishStatus;
@property (nonatomic) NSString imExtra;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSString entranceExtra;
@property (nonatomic) NSMutableDictionary startPageQuery;
@property (nonatomic) Q startPageQuery_Count;
+ (id)descriptor;
@end
