@interface AWESearchPadService : AWESearchVerticalContainerService
@property (nonatomic) <AWESearchResultVerticalBaseViewControllerProtocol> container;
@property (nonatomic) <AWESearchServiceManagerProtocol> serviceManager;
@property (nonatomic) NSString serviceID;
@property (nonatomic) NSString serviceName;
@property (nonatomic) q priority;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)duxGrid_viewDidChangeBreakPointFrom:toBreakPoint:;
- (BOOL)enableMutipleColumnStyle;
- (BOOL)enablePadSearchMultipleStyle;
- (BOOL)isContainerSizeChanged:toBreakPoint:;
- (void)handleVerticalAndHoriztionalFrom:toBreakPoint:;
- (void)clearNativeCardFrame;
- (void)handleCachalotLayout;
- (id)fetchCustomLayout;
- (id)fetchCurrentLeafModels;
- (BOOL)isGeneralSearch;
- (void)updateCellSubViewsFrame:withSearchModel:;
- (void)updateCellController:andModel:;
- (id)fetchSearchType;
- (void)handleParamsStatus;
- (long long)columnNum;
- (long long)currentColumn;
@end
