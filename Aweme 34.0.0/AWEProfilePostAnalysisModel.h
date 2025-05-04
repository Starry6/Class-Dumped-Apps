@interface AWEProfilePostAnalysisModel : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> context;
@property (nonatomic) NSArray itemModels;
@property (nonatomic) Q selectedTabType;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterFrom;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)referString;
- (void)setEnterFrom:;
- (void)setReferString:;
- (id)enterFrom;
- (void)setItemModels:;
- (id)itemModels;
- (void)setSelectedTabType:;
- (unsigned long long)selectedTabType;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
