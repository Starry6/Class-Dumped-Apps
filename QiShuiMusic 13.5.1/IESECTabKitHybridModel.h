@interface IESECTabKitHybridModel : IESECBaseApiModel
@property (nonatomic) IESECListKitListModel hybridList;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) Q cursor;
@property (nonatomic) NSDictionary passThroughParams;
@property (nonatomic) IESECTabKitHybridBizConfigModel bizConfig;
- (id)bizConfig;
- (id)hybridList;
- (id)logExtra;
- (id)passThroughParams;
- (void)setBizConfig:;
- (void)setHybridList:;
- (void)setLogExtra:;
- (void)setPassThroughParams:;
- (unsigned long long)cursor;
- (void)setHasMore:;
- (void)setCursor:;
- (void).cxx_destruct;
- (BOOL)hasMore;
+ (id)JSONKeyPathsByPropertyKey;
@end
