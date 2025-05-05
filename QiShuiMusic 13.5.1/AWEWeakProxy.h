@interface AWEWeakProxy : NSObject
@property (nonatomic) IESIMIndexView indexView;
@property (nonatomic) <IESIMTableViewSectionIndexDelegate> iesim_indexViewDelegate;
- (id)iesim_indexViewDelegate;
- (id)indexView;
- (void)setIesim_indexViewDelegate:;
- (void)setIndexView:;
- (void).cxx_destruct;
@end
