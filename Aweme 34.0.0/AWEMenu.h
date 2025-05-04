@interface AWEMenu : AWEMenuElement
@property (nonatomic) NSArray childMenus;
@property (nonatomic) q depth;
@property (nonatomic) BOOL isLeaf;
- (id)childMenus;
- (id)menuAtIndexPath:;
- (id)initWithName:childMenus:;
- (BOOL)validateIndexPath:;
- (long long)depth;
- (void).cxx_destruct;
- (BOOL)isLeaf;
@end
