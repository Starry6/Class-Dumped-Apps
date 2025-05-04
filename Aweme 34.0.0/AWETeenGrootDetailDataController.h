@interface AWETeenGrootDetailDataController : AWEListDataController
@property (nonatomic) NSString reactID;
@property (nonatomic) NSMutableArray deltaModels;
- (void)loadMoreWithCompletion:;
- (id)reactID;
- (void)setReactID:;
- (void)updateAwemeInfoWithParams:;
- (id)deltaModels;
- (id)initWithReactID:;
- (void)setDeltaModels:;
- (void).cxx_destruct;
@end
