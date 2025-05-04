@interface AWEDeliveryMediaUtil : NSObject
@property (nonatomic) NSMutableArray uploadImageHelpers;
@property (nonatomic) NSMutableArray uploadVideoHelpers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)transCodeVideoWithPigeonBizType:vid:completion:;
- (void)publishVideoWithPigeonBizType:vid:receiverId:completion:;
- (void)uploadVideoWithPigeonBizType:filePath:updateCallback:completion:;
- (void)uploadImageToTOSWithPigeonBizType:imageData:imageName:completion:;
- (void)uploadImageWithPigeonBizType:fileDatas:completion:;
- (void)uploadImageHelperDidFinish:;
- (void)uploadImageWithPigeonBizType:fileDatas:progresses:completion:;
- (void)uploadVideoHelperDidFinish:;
- (void)fetchVideoApiStrWithPigeonBizType:vid:completion:;
- (id)uploadImageHelpers;
- (void)setUploadImageHelpers:;
- (id)uploadVideoHelpers;
- (void)setUploadVideoHelpers:;
- (id)init;
- (void).cxx_destruct;
+ (id)imageUploadHost;
+ (id)videoUploadHost;
+ (id)videoFetchDomain;
+ (id)shared;
@end
