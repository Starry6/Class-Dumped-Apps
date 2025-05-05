@interface IESECGoodsFeedLynxResourceCellViewModel : IESECGoodsFeedCellBaseViewModel
@property (nonatomic) NSString lynxViewRequestID;
@property (nonatomic) q loadStatus;
@property (nonatomic) @? successComplete;
- (void)resourceLynxViewModelWithModel:;
- (id)successComplete;
- (id)calculateCellSizeForContaineSize:;
- (id)clientLogExtra;
- (id)initWithModel:context:useToInsert:;
- (void)listAdapter:willDisplaySectionController:cell:atIndex:;
- (id)lynxCardType;
- (id)lynxViewRequestID;
- (void)setLynxViewRequestID:;
- (void)setSuccessComplete:;
- (void)trackLynxCardLoad:;
- (void)setLoadStatus:;
- (void).cxx_destruct;
- (long long)loadStatus;
@end
