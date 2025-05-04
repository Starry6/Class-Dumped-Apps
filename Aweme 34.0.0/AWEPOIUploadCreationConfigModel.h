@interface AWEPOIUploadCreationConfigModel : MTLModel
@property (nonatomic) NSNumber statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) BOOL enablePreUploadVideo;
@property (nonatomic) AWEPOIUploadCreationVideoExtractConfig videoUploadConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMsg;
- (void)setStatusMsg:;
- (id)videoUploadConfig;
- (BOOL)enablePreUploadVideo;
- (void)setEnablePreUploadVideo:;
- (void)setVideoUploadConfig:;
- (id)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
