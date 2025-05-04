@interface AWEMVChannelDislikeViewController : AWEDoubleColumnDislikeViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (Class)headerClass;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)viewDidLoad;
- (Class)collectionViewCellClass;
+ (id)actionTypeString:;
@end
