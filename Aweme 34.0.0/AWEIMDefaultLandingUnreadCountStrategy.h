@interface AWEIMDefaultLandingUnreadCountStrategy : NSObject
@property (nonatomic) NSInteger preUnreadCount;
@property (nonatomic) NSInteger prePreUnreadCount;
@property (nonatomic) NSInteger zeroCount;
@property (nonatomic) NSInteger preZeroCount;
- (int)zeroCount;
- (void)setPreZeroCount:;
- (void)setPreUnreadCount:;
- (int)preZeroCount;
- (void)setZeroCount:;
- (int)preUnreadCount;
- (void)setPrePreUnreadCount:;
- (int)prePreUnreadCount;
- (void)encodeWithCoder:;
- (id)description;
- (id)initWithCoder:;
@end
