@interface BUFileSyncList : NSObject
@property (nonatomic) NSDictionary files;
@property (nonatomic) NSString path;
@property (nonatomic) NSString remote;
- (id)path;
- (id)remote;
- (void)setRemote:;
- (id)init;
- (void)setPath:;
- (void).cxx_destruct;
- (id)files;
- (void)setFiles:;
+ (id)fromDictionary:;
@end
