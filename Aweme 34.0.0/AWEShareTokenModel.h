@interface AWEShareTokenModel : NSObject
@property (nonatomic) NSString itemName;
@property (nonatomic) NSArray itemNames;
@property (nonatomic) NSString optionalParam;
@property (nonatomic) NSString optionalParam3;
@property (nonatomic) NSString tokenDescription;
@property (nonatomic) NSDictionary activityInfo;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) NSString extraParamsString;
@property (nonatomic) NSDictionary schemaExtraParams;
@property (nonatomic) q schemaType;
@property (nonatomic) NSString itemID;
@property (nonatomic) UIImage tokenAlertTopImage;
@property (nonatomic) NSString shareScene;
@property (nonatomic) NSDictionary degradeTokenDic;
@property (nonatomic) NSDictionary shareChannelConfig;
@property (nonatomic) NSString schema;
- (void)setExtraParams:;
- (id)extraParams;
- (void)setSchemaType:;
- (void)setShareChannelConfig:;
- (void)setActivityInfo:;
- (void)setSchemaExtraParams:;
- (id)shareScene;
- (void)setShareScene:;
- (id)shareChannelConfig;
- (id)extraParamsString;
- (id)schemaExtraParams;
- (void)setTokenAlertTopImage:;
- (void)setExtraParamsString:;
- (void)setTokenDescription:;
- (void)setDegradeTokenDic:;
- (id)tokenAlertTopImage;
- (void)setItemNames:;
- (void)setOptionalParam:;
- (id)optionalParam;
- (id)optionalParam3;
- (id)degradeTokenDic;
- (void)setOptionalParam3:;
- (void)addExtraParamsWithKey:value:;
- (id)tokenDescription;
- (id)schema;
- (id)itemID;
- (long long)schemaType;
- (void)setItemID:;
- (void)setSchema:;
- (id)itemName;
- (void).cxx_destruct;
- (void)setItemName:;
- (id)itemNames;
- (id)activityInfo;
@end
