@interface IESLiveWalletNormalSectionController : IGListSectionController
@property (nonatomic) IESLiveWalletNormalItem currentItem;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (BOOL)p_shouldHandleItem:;
- (long long)numberOfItems;
- (void)setCurrentItem:;
- (id)currentItem;
- (void).cxx_destruct;
- (id)inset;
- (id)sizeForItemAtIndex:;
@end
