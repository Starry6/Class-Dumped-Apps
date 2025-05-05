@interface IESGurdDownloadProgressManager : NSObject
@property (nonatomic) NSMutableDictionary progressObjectsDictionary;
- (void)observeAccessKey:channel:downloadProgressBlock:;
- (id)progressObjectForIdentity:;
- (id)progressObjectsDictionary;
- (void)removeObserverWithIdentity:;
- (void)setProgressObjectsDictionary:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
