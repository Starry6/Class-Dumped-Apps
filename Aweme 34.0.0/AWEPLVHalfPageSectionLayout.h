@interface AWEPLVHalfPageSectionLayout : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} separatorFrame;
@property (nonatomic) IGListSectionController sectionController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerDecorationViewWithLayout:;
- (id)calculateWithSection:collectionView:lastLayout:lastSctionLayoutEntity:;
- (id)layoutAttributesForDecorationViewAtIndexPath:;
- (void)setSeparatorFrame:;
- (id)separatorFrame;
- (void)setSectionController:;
- (id)sectionController;
- (void).cxx_destruct;
@end
