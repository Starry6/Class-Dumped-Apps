@interface AWEWeakProxy : NSObject
@property (nonatomic) AWEIndexView indexView;
@property (nonatomic) <AWETableViewSectionIndexDelegate> awe_indexViewDelegate;
- (id)awe_indexViewDelegate;
- (void)setAwe_indexViewDelegate:;
- (id)indexView;
- (void)setIndexView:;
- (void).cxx_destruct;
@end
