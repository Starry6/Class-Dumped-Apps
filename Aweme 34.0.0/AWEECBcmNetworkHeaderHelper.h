@interface AWEECBcmNetworkHeaderHelper : NSObject
@property (nonatomic) BOOL addBcmChainSwitch;
@property (nonatomic) NSArray pathAllowlist;
@property (nonatomic) NSArray pathsForEntranceInfo;
@property (nonatomic) NSDictionary prefetchUrlBtmConfig;
@property (nonatomic) BOOL entranceInfoDiffSwitch;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)awemeSettingDidChange;
- (void)addIntercept;
- (void)addEntranceInfoInterceptor;
- (id)_queryParamDictDecoded:;
- (void)setAddBcmChainSwitch:;
- (id)defaultPathAllowlist;
- (void)setPathAllowlist:;
- (void)setPrefetchUrlBtmConfig:;
- (void)setEntranceInfoDiffSwitch:;
- (void)setPathsForEntranceInfo:;
- (BOOL)addBcmChainSwitch;
- (id)pathAllowlist;
- (id)prefetchUrlBtmConfig;
- (void)addBcmChain:toRequestHeader:;
- (id)getCompressedChain:;
- (id)insertBtm:toChainArray:originBcmChain:;
- (BOOL)entranceInfoDiffSwitch;
- (id)pathsForEntranceInfo;
- (void)syncSettings;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)shared;
@end
