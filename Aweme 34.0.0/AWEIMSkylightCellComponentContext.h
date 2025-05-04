@interface AWEIMSkylightCellComponentContext : AWEIMComponentContext
@property (nonatomic) AWEIMSkylightCommonCell attachCell;
@property (nonatomic) AWEIMSkylightCellViewModel<AWEIMSkylightCellViewModelProtocol> cellViewModel;
@property (nonatomic) BOOL disableLongPress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)attachCell;
- (id)cellViewModel;
- (void)setCellViewModel:;
- (unsigned long long)vmType;
- (BOOL)disableLongPress;
- (void)setDisableLongPress:;
- (void)setAttachCell:;
- (void).cxx_destruct;
- (id)cellModel;
@end
