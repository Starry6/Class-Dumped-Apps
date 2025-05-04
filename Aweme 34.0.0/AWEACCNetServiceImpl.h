@interface AWEACCNetServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commonParameters;
- (id)requestWithModel:completion:;
- (id)defaultDomain;
- (id)POST:params:modelClass:completion:;
- (BOOL)needShowAWEApiErrorDescriptionWithError:;
- (id)networkErrorDomain;
- (id)apiErrorDomain;
- (void)downloadFileWithURL:destinationURL:supportTempFile:progress:completion:;
- (id)GET:params:modelClass:completion:;
- (id)invalidParameterError;
- (void)doTrackWithURLString:method:;
- (id)useJSONrequestSerializerPOST:params:modelClass:completion:;
- (id)uploadWithModel:progress:completion:;
- (void)downloadWithModel:progressBlock:completion:;
- (id)commonParametersForURLStr:;
- (id)uploadWithURLString:params:headerField:timeout:fileURL:fileName:progress:modelClass:completion:;
- (id)uploadWithURLString:parameters:headerField:timeout:constructingBodyWithBlock:progress:needcommonParams:modelClass:callback:;
- (void)cancel:;
@end
