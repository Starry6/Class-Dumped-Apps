@interface AWEPOIMapInfoHeaderTransportContainerView : UIView
@property (nonatomic) NSDictionary itemsViewMap;
@property (nonatomic) NSArray typeOrderArray;
@property (nonatomic) AWEPOIMapContext context;
- (void)bindActionAndState;
- (id)typeOrderArray;
- (void)setItemsViewMap:;
- (id)itemsViewMap;
- (void)setTypeOrderArray:;
- (id)init;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setupUI;
- (double)containerHeight;
- (id)keyForType:;
@end
