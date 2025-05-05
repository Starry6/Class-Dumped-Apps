@interface DCDocumentCameraViewServiceSession : NSObject
@property (nonatomic) DCDocumentCameraViewServiceSessionRequest sessionRequest;
@property (nonatomic) NSInteger viewServicePid;
@property (nonatomic) ICDocCamImageCache docCamImageCache;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setup;
- (void).cxx_destruct;
- (id)initWithSessionRequest:;
- (id)sessionRequest;
- (int)viewServicePid;
- (id)docCamImageCache;
+ (BOOL)supportsSecureCoding;
@end
