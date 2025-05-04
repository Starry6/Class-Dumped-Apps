@interface AWEGrouponVCStackRollBackStatusModel : NSObject
@property (nonatomic) NSString currentTabIdentifier;
@property (nonatomic) NSArray rootVCStack;
@property (nonatomic) NSArray presentedVCStack;
@property (nonatomic) BOOL isRollBacking;
- (void)setRootVCStack:;
- (id)rootVCStack;
- (void)setPresentedVCStack:;
- (id)presentedVCStack;
- (void)setIsRollBacking:;
- (BOOL)isRollBacking;
- (void).cxx_destruct;
- (id)currentTabIdentifier;
- (void)setCurrentTabIdentifier:;
@end
