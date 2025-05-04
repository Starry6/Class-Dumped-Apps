@interface AWELivePhotoImageXUploadRequestImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)requestWithImageData:params:responseHandler:;
- (id)createParamsWithAccessKeyId:secretAccessKey:sessionToken:serviceId:hostName:sliceSize:socketNum:traceId:convertURLPath:;
@end
