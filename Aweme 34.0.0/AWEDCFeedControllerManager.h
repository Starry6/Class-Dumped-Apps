@interface AWEDCFeedControllerManager : AWEShellControllerManager
@property (nonatomic) NSMutableArray controllers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)classNameArray;
- (void)loadControllersWithViewController:rootView:withContext:;
- (id)getClassArray;
- (id)removeUnloadControllersWithContext:;
- (id)controllers;
- (void).cxx_destruct;
- (void)setControllers:;
- (void)setupWithContext:;
@end
