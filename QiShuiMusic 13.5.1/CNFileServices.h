@interface CNFileServices : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)close:;
- (int)errnoValue;
- (int)open:::;
- (int)statfs::;
- (int)fstatfs::;
- (int)flock::;
- (int)fcntl_flock:::;
- (id)NSTemporaryDirectory;
+ (id)sharedInstance;
@end
