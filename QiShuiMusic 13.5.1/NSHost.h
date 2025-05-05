@interface NSHost : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSArray names;
@property (nonatomic) NSString address;
@property (nonatomic) NSArray addresses;
@property (nonatomic) NSString localizedName;
- (void)dealloc;
- (id)localizedName;
- (id)names;
- (id)description;
- (id)address;
- (id)name;
- (id)_thingToResolve;
- (BOOL)isEqualToHost:;
- (id)addresses;
+ (id)currentHost;
+ (id)hostWithName:;
+ (id)hostWithAddress:;
+ (BOOL)isHostCacheEnabled;
+ (void)setHostCacheEnabled:;
+ (void)flushHostCache;
@end
