@interface AVAssetResourceLoadingRequestor : NSObject
@property (nonatomic) BOOL providesExpiredSessionReports;
- (void)dealloc;
- (BOOL)providesExpiredSessionReports;
- (id)initWithRequestInfo:;
@end
