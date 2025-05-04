@interface AWESearchTopBarContext : NSObject
@property (nonatomic) double topBarWidth;
@property (nonatomic) double topBarHeight;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) <AWESearchTopBarControllerDelegate> delegate;
@property (nonatomic) AWESearchTopBarLifeServiceContext lifeServiceContext;
- (void)setEnterFrom:;
- (id)enterFrom;
- (double)topBarWidth;
- (void)setTopBarWidth:;
- (id)lifeServiceContext;
- (void)setLifeServiceContext:;
- (double)topBarHeight;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setTopBarHeight:;
@end
