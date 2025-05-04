@interface AWEFindFriendsQRCodeSectionController : AWEBaseListSectionController
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (Class)cellClass;
- (double)separatorHeight;
@end
