@interface IESECWinHybridContext : NSObject
@property (nonatomic) IESECWinContext winContext;
@property (nonatomic) UIViewController tabVC;
@property (nonatomic) UIViewController feedVC;
- (id)feedVC;
- (void)setFeedVC:;
- (void)setTabVC:;
- (void)setWinContext:;
- (id)tabVC;
- (id)winContext;
- (void).cxx_destruct;
@end
