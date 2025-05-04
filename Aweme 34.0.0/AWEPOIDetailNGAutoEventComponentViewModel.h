@interface AWEPOIDetailNGAutoEventComponentViewModel : DitoComponentViewModel
@property (nonatomic) DitoGeneralContainerPageContext generalContext;
@property (nonatomic) NSArray nodeEventList;
- (void)retryLoadData;
- (void)bindStateAndAction;
- (id)generalContext;
- (void)setNodeEventList:;
- (id)nodeEventList;
- (id)initWithNode:;
- (void).cxx_destruct;
- (void)dispatchEvent;
@end
