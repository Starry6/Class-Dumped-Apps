@interface CVNLPCLIPModel : NSObject
@property (nonatomic) {shared_ptr<cvnlp::clip::CLIPModel>=^{CLIPModel}^{__shared_weak_count}} model;
@property (nonatomic) NSString modelName;
@property (nonatomic) NSDictionary options;
- (id)modelName;
- (id)model;
- (id)options;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithOptions:error:;
- (id)encodeImage:error:;
- (id)encodeText:error:;
- (id)encodeTextAverage:error:;
@end
