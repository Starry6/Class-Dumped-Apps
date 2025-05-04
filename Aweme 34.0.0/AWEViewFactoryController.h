@interface AWEViewFactoryController : AWEBaseController
@property (nonatomic) UIView oldView;
- (BOOL)needShowViewByModel:;
- (id)createViewByModel:;
- (id)oldView;
- (void)setOldView:;
- (void)updateViewByModel:model:;
- (void).cxx_destruct;
@end
