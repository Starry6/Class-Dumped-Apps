@interface AMSUniversalLinks : NSObject
@property (nonatomic) AMSUniversalLinksConnection connection;
- (id)init;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)updateUniversalLinks;
+ (id)_connection;
+ (void)update;
+ (id)_privateQueue;
@end
