@interface HTSService : NSObject
@property (nonatomic) BOOL isServiceRemoved;
@property (nonatomic) BOOL isServicePersistent;
- (BOOL)isServicePersistent;
- (BOOL)isServiceRemoved;
- (void)setIsServicePersistent:;
- (void)setIsServiceRemoved:;
@end
