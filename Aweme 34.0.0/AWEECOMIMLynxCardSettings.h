@interface AWEECOMIMLynxCardSettings : NSObject
@property (nonatomic) NSDictionary lynxMessageTypeDict;
@property (nonatomic) NSDictionary cardMap;
@property (nonatomic) NSCache UIDLMemoryCache;
@property (nonatomic) NSDictionary templateCardBackupRenderTips;
@property (nonatomic) NSDictionary templateCardHintMap;
- (BOOL)isLynxCard:;
- (id)cardMap;
- (void)setCardMap:;
- (void)setUIDLMemoryCache:;
- (id)UIDLMemoryCache;
- (id)lynxMessageTypeDict;
- (id)templateCardBackupRenderTips;
- (id)templateCardHintMap;
- (id)lynxCardConfigWithMessage:;
- (id)platformServiceLynxCardUITemplateData:;
- (id)schemaInCardConfig:;
- (void)setLynxMessageTypeDict:;
- (void)setTemplateCardBackupRenderTips:;
- (void)setTemplateCardHintMap:;
- (id)init;
- (void).cxx_destruct;
+ (void)prepareGeckoResource;
+ (id)lynxCardGeckoChannels;
+ (id)templateCardBackupConfigWithVersionStr:;
+ (id)templateCardBackupDefaultLynxConfig;
+ (id)shared;
@end
