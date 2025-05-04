@interface AWEIMSubscribeSectionController : AWEBaseListSectionController
@property (nonatomic) AWEUserActionSheetView actionSheetView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configCell:index:model:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)didSelectItemAtIndex:model:;
- (void)didLongPressOnCell:;
- (void)__onSettingClik:;
- (void)__onUserClik:from:;
- (void)__trackEvent:addtionInfo:model:;
- (void)__trackUserClickEvent:model:;
- (void)setActionSheetView:;
- (id)actionSheetView;
- (id)__recommendRankingStringWithCardIndex:articleIndex:;
- (Class)cellClass;
- (void).cxx_destruct;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
@end
