@interface NSCondition : NSObject
@property (nonatomic) NSString name;
- (void)signal;
- (id)init;
- (void)dealloc;
- (void)setName:;
- (void)broadcast;
- (void)unlock;
- (void)lock;
- (void)wait;
- (BOOL)waitUntilDate:;
- (id)description;
- (id)name;
@end
