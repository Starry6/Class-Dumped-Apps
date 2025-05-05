@interface PCCEndpoint : NSObject
@property (nonatomic) I fileTimeout;
@property (nonatomic) NSArray deviceIds;
- (void).cxx_destruct;
- (void)runWithDelegate:;
- (BOOL)isDeviceNearby:;
- (id)synchronize:withOptions:;
- (id)send:message:error:;
- (id)send:file:metadata:error:;
- (unsigned int)fileTimeout;
- (void)setFileTimeout:;
- (id)deviceIds;
@end
