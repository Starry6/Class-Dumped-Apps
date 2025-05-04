@interface AWEProfileEditTabLandingPanelHelper : NSObject
@property (nonatomic) AWECodeGenLandingSwitchEditInfoModel model;
@property (nonatomic) @? actionHandler;
@property (nonatomic) DUXContentSheet sheet;
@property (nonatomic) DUXSingleSelectionPanel panel;
@property (nonatomic) Q initIndex;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (id)selectionPanel:optionNameAtRow:;
- (BOOL)selectionPanel:willClickRow:;
- (void)selectionPanel:didClickRow:;
- (void)setInitIndex:;
- (unsigned long long)initIndex;
- (void)showPanelWithEditModel:vc:actionHandler:;
- (void)setModel:;
- (id)actionHandler;
- (void)setActionHandler:;
- (id)model;
- (void).cxx_destruct;
- (id)panel;
- (id)sheet;
- (void)setPanel:;
- (void)setSheet:;
@end
