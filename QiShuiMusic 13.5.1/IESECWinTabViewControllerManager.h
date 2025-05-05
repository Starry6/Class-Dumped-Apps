@interface IESECWinTabViewControllerManager : NSObject
@property (nonatomic) NSMapTable viewControllerMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mapKey:;
- (id)createViewControllerWithModel:;
- (id)getViewControllerWithTab:;
- (void)setViewControllerMap:;
- (void)updateViewControllerWithModel:;
- (BOOL)viewControllerExistWithModel:;
- (id)viewControllerMap;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
