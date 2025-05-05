@interface IESLiveTeamFightLogHandler : NSObject
@property (nonatomic) q teamFightType;
@property (nonatomic) <IESLiveTeamFightBaseProvider> provider;
@property (nonatomic) BOOL isAnchor;
- (id)logCategoryStr:;
- (id)initWithTeamFightType:diContext:;
- (void)logErrorWithCategory:event:extra:;
- (void)logInfoWithCategory:event:extra:;
- (void)logWithLevel:category:event:extra:;
- (void)setIsAnchor:;
- (void)setTeamFightType:;
- (id)teamFightStatusStr;
- (long long)teamFightType;
- (void)setProvider:;
- (BOOL)isAnchor;
- (id)provider;
- (void).cxx_destruct;
@end
