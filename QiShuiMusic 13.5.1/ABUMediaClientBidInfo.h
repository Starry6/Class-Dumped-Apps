@interface ABUMediaClientBidInfo : NSObject
@property (nonatomic) ABUAdPackage package;
@property (nonatomic) NSString eCPMLevel;
@property (nonatomic) q originECPM;
@property (nonatomic) NSString adnSlotID;
@property (nonatomic) NSString adnName;
@property (nonatomic) ABUMediaSlotConfig config;
@property (nonatomic) double eCPM;
@property (nonatomic) BOOL needNotify;
@property (nonatomic) BOOL didNotify;
@property (nonatomic) BOOL invalid;
@property (nonatomic) NSDictionary invalidInfo;
@property (nonatomic) NSString mediaReqID;
- (id)adnName;
- (void)_parseWithClientType;
- (void)_parseWithMultiType;
- (id)adnSlotID;
- (double)eCPM;
- (id)eCPMLevel;
- (id)invalidInfo;
- (id)mediaReqID;
- (BOOL)needNotify;
- (void)notifyWithResult:andWinnerPrice:andWinnerAdnName:andHighestLossPrice:;
- (long long)originECPM;
- (void)setECPMLevel:;
- (void)setNeedNotify:;
- (void)setOriginECPM:;
- (void)setPackage:;
- (id)package;
- (id)init;
- (BOOL)invalid;
- (void).cxx_destruct;
- (id)config;
- (id)initWithPackage:;
- (BOOL)didNotify;
@end
