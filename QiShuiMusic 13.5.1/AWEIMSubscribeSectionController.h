@interface AWEIMSubscribeSectionController : IESIMBaseListSectionController
@property (nonatomic) AWEUserActionSheetView actionSheetView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__trackEvent:addtionInfo:model:;
- (id)actionSheetView;
- (void)__onSettingClik:;
- (void)__onUserClik:from:;
- (void)__trackUserClickEvent:model:;
- (void)configCell:index:model:;
- (void)didLongPressOnCell:;
- (void)didSelectItemAtIndex:model:;
- (void)setActionSheetView:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void).cxx_destruct;
- (Class)cellClass;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (id)inset;
@end
