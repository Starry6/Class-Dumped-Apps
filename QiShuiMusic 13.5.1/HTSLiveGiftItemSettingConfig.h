@interface HTSLiveGiftItemSettingConfig : NSObject
@property (nonatomic) BOOL allMicSendBuffFix;
@property (nonatomic) BOOL curatedUseDefaultBuffCard;
@property (nonatomic) BOOL storedBuffCardFix;
@property (nonatomic) BOOL methodExtract;
@property (nonatomic) NSArray defaultSelectCardTabs;
@property (nonatomic) BOOL useLynxBuffCard;
@property (nonatomic) BOOL enableShowBuffCardImmediately;
- (BOOL)useLynxBuffCard;
- (BOOL)allMicSendBuffFix;
- (BOOL)curatedUseDefaultBuffCard;
- (id)defaultSelectCardTabs;
- (BOOL)enableShowBuffCardImmediately;
- (BOOL)methodExtract;
- (void)setAllMicSendBuffFix:;
- (void)setCuratedUseDefaultBuffCard:;
- (void)setDefaultSelectCardTabs:;
- (void)setEnableShowBuffCardImmediately:;
- (void)setMethodExtract:;
- (void)setStoredBuffCardFix:;
- (void)setUseLynxBuffCard:;
- (BOOL)storedBuffCardFix;
- (void).cxx_destruct;
@end
