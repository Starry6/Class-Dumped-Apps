@interface AWEUserWorkCellDiagnoseComponent : AWERLComponent
@property (nonatomic) BOOL initedDiagnoseContent;
@property (nonatomic) AWERLVirtualNode diagnoseVirtualNode;
@property (nonatomic) AWERLFlexChildVirtualNode flexChildVirtualNode;
@property (nonatomic) NSString diagnoseContent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)virtualNodeWithChildren:;
- (id)diagnoseContent;
- (id)flexChildVirtualNode;
- (BOOL)initedDiagnoseContent;
- (void)setInitedDiagnoseContent:;
- (id)diagnoseVirtualNode;
- (void)setDiagnoseContent:;
- (void)setDiagnoseVirtualNode:;
- (void)setFlexChildVirtualNode:;
- (id)accessibilityLabel;
- (void).cxx_destruct;
+ (id)componentWithData:context:;
@end
