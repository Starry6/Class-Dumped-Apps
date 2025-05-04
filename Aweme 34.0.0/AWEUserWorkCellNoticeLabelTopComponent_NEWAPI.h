@interface AWEUserWorkCellNoticeLabelTopComponent_NEWAPI : AWEUserWorkCellNoticeLabelComponent_NEWAPI
@property (nonatomic) AWERLVirtualView noticeLabelVirtualView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackParams;
- (id)buildVirtualView:;
- (id)createTag;
- (BOOL)canShowNoticeLabel;
- (void)updateTagTitle:;
- (id)noticeLabelVirtualView;
- (void)setNoticeLabelVirtualView:;
- (void).cxx_destruct;
+ (id)componentWithData:context:;
@end
