@interface AWEHangoutPublishInfoModel : MTLModel
@property (nonatomic) BOOL isSelfPublish;
@property (nonatomic) AWEPublishBaseTask publishTask;
@property (nonatomic) UIImage localCoverImage;
@property (nonatomic) Q publishState;
@property (nonatomic) double uploadProgress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)localCoverImage;
- (BOOL)isSelfPublish;
- (id)publishTask;
- (void)setPublishState:;
- (void)setLocalCoverImage:;
- (void)setIsSelfPublish:;
- (void)setPublishTask:;
- (void).cxx_destruct;
- (unsigned long long)publishState;
- (double)uploadProgress;
- (void)setUploadProgress:;
@end
