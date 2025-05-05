@interface CJPayNestingLynxCardManager : NSObject
- (void)openSchemeByNtvVC:fromVC:withInfo:completion:;
- (void)trackerWithSdkInfo:;
+ (id)defaultService;
@end
