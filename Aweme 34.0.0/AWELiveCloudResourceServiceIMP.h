@interface AWELiveCloudResourceServiceIMP : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)registerAccessKey:;
- (id)appAccessKey;
- (void)registerAccessKey:channels:;
- (void)syncResourceWithAccessKey:channels:resourceVersion:isColdLaunch:completion:;
- (void)syncResourcesWithAccessKey:channels:resourceVersion:isColdLaunch:isForcible:disableThrottle:isUrgent:completion:;
- (id)createTaskWithAccessKey:channelArray:isColdLaunch:disableThrottle:isForcible:isUrgent:resourceVersion:taskCompletion:;
- (void)syncResourcesWithAccessKey:channel:resourceVersion:isColdLaunch:isForcible:disableThrottle:isUrgent:progressBlock:completion:;
- (void)syncResourceWithAccessKey:group:resourceVersion:isColdLaunch:completion:;
- (void)syncResourceWithAccessKey:channel:resourceVersion:progressBlock:isColdLaunch:completion:;
- (void)asyncResourceWithAccessKey:channels:resourceVersion:isColdLaunch:completion:;
- (void)syncLazyResourceWithAccessKey:channel:resourceVersion:completion:;
- (void)cancelLazyDownloadWithAccesskey:channel:;
- (BOOL)hasCacheForFilename:accessKey:channel:;
- (id)dataForFilename:accessKey:channel:;
- (void)configLiveCloudResourceService;
- (void)syncResourcesWithAccessKey:channels:resourceVersion:isForcible:completion:;
@end
