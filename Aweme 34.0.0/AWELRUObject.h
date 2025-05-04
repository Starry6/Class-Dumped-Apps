@interface AWELRUObject : NSObject
@property (nonatomic) AWELRUObject preObject;
@property (nonatomic) AWELRUObject nextObject;
@property (nonatomic) NSString itemID;
@property (nonatomic) double timestamp;
- (id)preObject;
- (void)setPreObject:;
- (void)setNextObject:;
- (double)timestamp;
- (id)nextObject;
- (id)itemID;
- (void)setItemID:;
- (void)setTimestamp:;
- (void).cxx_destruct;
@end
