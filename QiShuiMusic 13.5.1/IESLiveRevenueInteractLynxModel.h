@interface IESLiveRevenueInteractLynxModel : IESLiveDynamicMTLModel
@property (nonatomic) <IESLivePKProvider> pkProvider;
@property (nonatomic) <IESLiveMultiLinkerProvider> multiLinkerProvider;
@property (nonatomic) <IESLiveRevenueInteractProvider> interactProvider;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)interactProvider;
- (id)jsonDictionaryFilterWith:;
- (id)multiLinkerProvider;
- (id)pkProvider;
- (id)playModel;
- (void)setInteractProvider:;
- (void)setMultiLinkerProvider:;
- (void)setPkProvider:;
- (void).cxx_destruct;
- (id)jsonDictionary;
@end
