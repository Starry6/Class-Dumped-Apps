@interface AWEPlayAiToTextComplianceNoticeView : UIView
@property (nonatomic) DUXContentSheet sheet;
@property (nonatomic) DUXInfoPanel infoPanel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)infoPanel;
- (void)setInfoPanel:;
- (void)dismissComplianceNoticeView;
- (void)showComplianceNoticeView;
- (void).cxx_destruct;
- (id)sheet;
- (void)setSheet:;
+ (BOOL)shouldShowComplianceNoticeWithModel:;
+ (BOOL)shouleShowComplianceNoticeEntranceWithModel:;
@end
