@interface AWETeenProfileRedDotManager : NSObject
@property (nonatomic) NSMutableArray taskArray;
@property (nonatomic) BOOL shouldShow;
- (id)taskArray;
- (void)setTaskArray:;
- (void)setTaskShowenOfType:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (void)setShouldShow:;
+ (id)sharedInstance;
@end
