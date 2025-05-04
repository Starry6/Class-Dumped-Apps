@interface AWEShowMixPlayerLynxElementManager : NSObject
@property (nonatomic) NSMapTable elementTable;
- (void)registElementView:withElementID:;
- (id)elementViewWithElementID:;
- (id)elementTable;
- (void)removeElementViewWithElementID:;
- (void)setElementTable:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
