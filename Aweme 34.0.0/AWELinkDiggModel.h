@interface AWELinkDiggModel : AWEBaseApiModel
@property (nonatomic) NSNumber diggCount;
@property (nonatomic) BOOL userDigged;
@property (nonatomic) BOOL userBuried;
- (id)diggCount;
- (BOOL)userDigged;
- (void)setUserDigged:;
- (BOOL)userBuried;
- (void)setDiggCount:;
- (void)setUserBuried:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
