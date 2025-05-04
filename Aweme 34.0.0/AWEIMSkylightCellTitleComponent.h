@interface AWEIMSkylightCellTitleComponent : AWEIMSkylightBaseComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)updateComponentAfterModelUpdate;
- (void)imUserDidChange;
- (void)p_updateTitleWithModel:;
@end
