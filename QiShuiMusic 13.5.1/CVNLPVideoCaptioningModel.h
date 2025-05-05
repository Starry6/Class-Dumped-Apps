@interface CVNLPVideoCaptioningModel : NSObject
@property (nonatomic) {shared_ptr<cvnlp::vidcap::VideoCaptioningModel>=^{VideoCaptioningModel}^{__shared_weak_count}} model;
@property (nonatomic) NSDictionary options;
- (id)model;
- (id)options;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithOptions:error:;
- (id)generateCaption:error:;
@end
