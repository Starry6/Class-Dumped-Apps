@interface AWEUserWorkCellNoticeLabelTopComponent : AWEUserWorkCellNoticeLabelComponent
@property (nonatomic) AWERLFlexChildVirtualNode noticeLabelVirtualNode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackParams;
- (id)virtualNodeWithChildren:;
- (id)createTag;
- (BOOL)canShowNoticeLabel;
- (id)noticeLabelVirtualNode;
- (void)updateTagTitle:;
- (void)setNoticeLabelVirtualNode:;
- (void).cxx_destruct;
+ (id)componentWithData:context:;
@end
