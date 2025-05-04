@interface AWEVideoCDNRedirectTracker : NSObject
@property (nonatomic) NSMutableDictionary CDNURLRecordsDictionary;
@property (nonatomic) NSMutableDictionary redirectURLDictionary;
@property (nonatomic) NSMutableDictionary videoItemIdURLListDictionary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)videoWillRequest:isRedirectRequest:;
- (void)videoDidReceiveResponse:forRequest:;
- (void)localServerCDNLog:;
- (void)associatedVideoItemId:withURLArray:;
- (void)initValues;
- (void)createCDNTrackerInfo:forRequest:responseDuration:requestTimestamp:;
- (id)videoItemIdURLListDictionary;
- (id)redirectURLDictionary;
- (id)CDNURLRecordsDictionary;
- (void)proactiveGetCDNLogByKey:;
- (long long)getCDNHitCode:;
- (void)getCDNRequestRecords:urlList:completion:;
- (void)setCDNURLRecordsDictionary:;
- (void)setRedirectURLDictionary:;
- (void)setVideoItemIdURLListDictionary:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
