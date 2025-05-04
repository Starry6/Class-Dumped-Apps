@interface AWEUserWorkCellDiagnoseComponent_NEWAPI : AWEUserWorkCellBaseComponent
@property (nonatomic) BOOL initedDiagnoseContent;
@property (nonatomic) AWERLVirtualView diagnoseVirtualView;
@property (nonatomic) NSString diagnoseContent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)buildVirtualView:;
- (id)diagnoseContent;
- (BOOL)initedDiagnoseContent;
- (void)setInitedDiagnoseContent:;
- (void)setDiagnoseContent:;
- (id)diagnoseVirtualView;
- (void)setDiagnoseVirtualView:;
- (id)accessibilityLabel;
- (void).cxx_destruct;
+ (id)componentWithData:context:;
@end
