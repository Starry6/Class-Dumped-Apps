@interface AWECloudCompileTask : NSObject
@property (nonatomic) NLEMediaRemoteCloud_OC cloudExporter;
@property (nonatomic) <AWECloudCompileTaskDelegate> delegate;
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)publishModel;
- (void)setPublishModel:;
- (void)setCloudExporter:;
- (void)updateCloudTemplateSyncWithNLEModel:;
- (id)cloudExporter;
- (void)onCompileDone:;
- (void)onCompileError:ext:f:msg:;
- (void)onVeError:ext:f:msg:;
- (void)onCompileProgress:;
- (void)onCompileStart:;
- (id)initWithPublishModel:delegate:;
- (void)dealloc;
- (id)delegate;
- (void)cancel;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)start;
@end
