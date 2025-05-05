@interface BDUGContainer : NSObject
@property (nonatomic) NSMutableDictionary codes;
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphore;
- (void)setCode:forKey:;
- (id)createObjectForProtocol:;
- (id)optionalObjectForProtocol:;
- (void)setClass:forProtocol:;
- (void)setObject:forProtocol:;
- (id)init;
- (void)setSemaphore:;
- (void).cxx_destruct;
- (id)semaphore;
- (id)codes;
- (void)setCodes:;
- (id)codeForKey:;
+ (id)stringKeyForProtocol:;
+ (id)sharedInstance;
@end
