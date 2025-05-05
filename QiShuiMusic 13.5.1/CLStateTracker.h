@interface CLStateTracker : NSObject
@property (nonatomic) ^v identifier;
- (BOOL)dumpState:withSize:hints:;
- (void)dealloc;
- (id)identifier;
- (id)initWithQueue:;
+ (id)trackerStateTypeName;
+ (unsigned long long)trackerStateSize;
@end
