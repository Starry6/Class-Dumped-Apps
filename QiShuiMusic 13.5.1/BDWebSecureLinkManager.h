@interface BDWebSecureLinkManager : NSObject
@property (nonatomic) NSMutableDictionary cacheSecueUrlDic;
@property (nonatomic) NSMutableDictionary cacheDangerUrlDic;
@property (nonatomic) NSMutableDictionary cacheGrayUrlDic;
@property (nonatomic) NSMutableArray errorList;
@property (nonatomic) NSDate errorOverwhelmingDate;
@property (nonatomic) q cacheDuration;
@property (nonatomic) NSString domain;
@property (nonatomic) BDWebSecureLinkCustomSetting customSetting;
- (id)cacheGrayUrlDic;
- (void)cacheDangerLink:;
- (id)cacheDangerUrlDic;
- (long long)cacheDuration;
- (id)cacheSecueUrlDic;
- (void)cacheSecureLink:;
- (void)configSecureLinkDomain:;
- (id)customSetting;
- (id)errorList;
- (id)errorOverwhelmingDate;
- (void)handleSecureLinkError:errorCode:errorMsg:;
- (BOOL)isLinkInDangerLinkCache:;
- (BOOL)isLinkInSecureLinkCache:;
- (BOOL)isLinkPassForSecureLinkServiceErr;
- (BOOL)isSecureLink:;
- (void)onTriggerSecureLinkError:errorCode:errorMsg:;
- (id)seclinkApi;
- (id)seclinkDomain;
- (void)setCacheDangerUrlDic:;
- (void)setCacheDuration:;
- (void)setCacheGrayUrlDic:;
- (void)setCacheSecueUrlDic:;
- (void)setCustomSetting:;
- (void)setErrorList:;
- (void)setErrorOverwhelmingDate:;
- (void)updateCacheDuration:;
- (id)wrapToQuickMiddlePage:aid:scene:lang:risk:;
- (id)wrapToSecureLink:aid:scene:lang:;
- (void).cxx_destruct;
- (id)domain;
- (void)setDomain:;
+ (id)shareInstance;
@end
