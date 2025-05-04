@interface AWEIMGroupJoinPanelFetchResult : NSObject
@property (nonatomic) Q panelType;
@property (nonatomic) NSArray itemViewModels;
@property (nonatomic) NSDictionary trackDict;
- (unsigned long long)panelType;
- (id)trackDict;
- (id)itemViewModels;
- (void)setItemViewModels:;
- (void)setPanelType:;
- (id)initWithPanel:itemViewModels:trackDict:;
- (void).cxx_destruct;
@end
