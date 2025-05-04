@interface AWETheaterMoreDislikeViewController : AWEDoubleColumnDislikeViewController
@property (nonatomic) NSDictionary logExtra;
- (void)setLogExtra:;
- (id)logExtra;
- (Class)headerClass;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (Class)collectionViewCellClass;
- (void).cxx_destruct;
+ (void)showDislikeVCWithLocation:moreSectionItem:logExtraDict:cellLogExtra:senderVC:feedbackBlock:afterDismissFeedbackBlock:;
@end
