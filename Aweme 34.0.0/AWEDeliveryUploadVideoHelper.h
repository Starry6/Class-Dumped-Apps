@interface AWEDeliveryUploadVideoHelper : NSObject
@property (nonatomic) BDVideoUploaderClient uploadClient;
@property (nonatomic) @? callback;
@property (nonatomic) @? progresses;
@property (nonatomic) <AWEDeliveryUploadVideoHelperDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)videoUpload:didFinish:error:;
- (void)videoUpload:progressDidUpdate:;
- (long long)videoUploadGetNetState:;
- (id)videoUploadGetMetaString:;
- (void)videoUpload:onLogInfo:;
- (id)uploadClient;
- (void)setUploadClient:;
- (void)uploadVideoWithPigeonBizType:filePath:updateCallback:completion:;
- (void)fetchUploadVideoTokenWithPigeonBizType:completion:;
- (void)setCallback:;
- (id)callback;
- (id)delegate;
- (id)progresses;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setProgresses:;
@end
