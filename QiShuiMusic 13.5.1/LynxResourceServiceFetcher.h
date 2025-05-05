@interface LynxResourceServiceFetcher : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)loadResourceWithURL:type:completion:;
- (void)loadResourceWithURLString:completion:;
- (id)requestAsyncWithResourceRequest:type:lynxResourceLoadCompletedBlock:;
- (id)requestSyncWithResourceRequest:type:;
+ (BOOL)ensureLynxService;
+ (id)getLynxService;
@end
