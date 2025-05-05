@interface IESLiveGiftPanelLineView : UIView
@property (nonatomic) UIView lineView;
@property (nonatomic) IESLiveGiftPanelLineItem item;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;
- (void)didSetAttachingDIContext;
- (id)sectionVM;
- (void)setSectionVM:;
- (id)item;
- (id)initWithFrame:;
- (void)setItem:;
- (void).cxx_destruct;
- (id)lineView;
- (void)setLineView:;
@end
