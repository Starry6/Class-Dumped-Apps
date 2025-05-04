@interface AWELiveHotNewsServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableLiveHotNews;
- (void)showHotNewsControllerWithParentController:withTitle:previousPage:currentPage:cellEnableClick:beforeJumpBlock:dismissBlock:completeBlock:;
- (void)showHotNewsControllerWithParentController:withTitle:previousPage:currentPage:cellEnableClick:beforeJumpBlock:dismissBlock:completeBlock:extraDict:;
@end
