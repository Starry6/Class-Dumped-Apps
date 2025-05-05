@interface HmpDevice : NSObject
@property (nonatomic) ^{Device=ss} impl;
@property (nonatomic) BOOL own;
- (BOOL)own;
- (id)initFromString:;
- (void)setOwn:;
- (id)initFromPtr::;
- (id)init;
- (void)dealloc;
- (int)index;
- (int)type;
- (id)ptr;
- (id)impl;
- (id)description;
- (void)setImpl:;
+ (int)current:;
+ (void)set_current:;
+ (long long)count:;
@end
