@interface AWEBizTabBarUpdateSelectedOptions : NSObject
@property (nonatomic) BOOL isByTap;
@property (nonatomic) BOOL forbidRefresh;
@property (nonatomic) NSString reloadScene;
@property (nonatomic) NSString transitionClass;
@property (nonatomic) double transitionDuration;
@property (nonatomic) NSDictionary transitionExtra;
- (void)setIsByTap:;
- (id)transitionClass;
- (BOOL)isByTap;
- (BOOL)forbidRefresh;
- (void)setForbidRefresh:;
- (id)reloadScene;
- (void)setReloadScene:;
- (void)setTransitionClass:;
- (id)transitionExtra;
- (void)setTransitionExtra:;
- (id)init;
- (double)transitionDuration;
- (void)setTransitionDuration:;
- (void).cxx_destruct;
- (BOOL)hasTransition;
@end
