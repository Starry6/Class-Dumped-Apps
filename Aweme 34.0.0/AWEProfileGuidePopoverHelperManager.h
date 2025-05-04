@interface AWEProfileGuidePopoverHelperManager : NSObject
@property (nonatomic) NSMutableArray helperArray;
- (BOOL)containsPopoverHelper:;
- (id)helperArray;
- (void)addPopoverHelper:;
- (void)removePopoverHelper:;
- (void)setHelperArray:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
