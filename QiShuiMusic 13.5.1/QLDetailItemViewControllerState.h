@interface QLDetailItemViewControllerState : NSObject
@property (nonatomic) NSString actionButtonTitle;
@property (nonatomic) UIView actionButtonView;
@property (nonatomic) BOOL informationVisible;
- (void).cxx_destruct;
- (void)setActionButtonTitle:;
- (id)actionButtonTitle;
- (id)actionButtonView;
- (void)setActionButtonView:;
- (BOOL)isInformationVisible;
- (void)setInformationVisible:;
+ (id)detailItemViewControllerStateWithActionButtonTitle:actionButtonView:informationVisible:;
@end
