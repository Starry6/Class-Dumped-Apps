@interface AWEPOIReflowResourceComponent : NSObject
@property (nonatomic) BOOL bOpen;
@property (nonatomic) NSString transSchema;
- (void)setupConfig:;
- (void)setBOpen:;
- (void)setTransSchema:;
- (id)makeFeedOriginGidInfo;
- (id)makeTransformerTransInfo:sourceType:;
- (id)openSubPageSchema:scene:;
- (id)transSchema;
- (id)hostPrefix;
- (BOOL)isLocalLifeReflowSchema:;
- (BOOL)switchRouterWithSchema:;
- (BOOL)bOpen;
- (BOOL)prefixEqual:;
- (BOOL)needReplaceSchema:;
- (void).cxx_destruct;
@end
