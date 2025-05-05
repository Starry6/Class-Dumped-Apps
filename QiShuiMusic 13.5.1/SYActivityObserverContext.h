@interface SYActivityObserverContext : NSObject
@property (nonatomic) BOOL needsCacheUpdate;
- (BOOL)needsCacheUpdate;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setNeedsCacheUpdate:;
+ (BOOL)supportsSecureCoding;
@end
