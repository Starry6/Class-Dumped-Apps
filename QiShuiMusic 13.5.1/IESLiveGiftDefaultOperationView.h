@interface IESLiveGiftDefaultOperationView : UIView
@property (nonatomic) UILabel operationHintLabel;
@property (nonatomic) UIButton operationButton;
@property (nonatomic) IESLiveGiftDefaultOperationItem item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;
- (id)operationButton;
- (void)didOperationViewClicked:;
- (void)didSetAttachingDIContext;
- (void)loadSubviews;
- (id)operationHintLabel;
- (id)sectionVM;
- (void)setOperationButton:;
- (void)setOperationHintLabel:;
- (void)setSectionVM:;
- (id)item;
- (id)initWithFrame:;
- (void)setItem:;
- (void).cxx_destruct;
@end
