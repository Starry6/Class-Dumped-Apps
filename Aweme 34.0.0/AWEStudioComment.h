@interface AWEStudioComment : NSObject
@property (nonatomic) AWEVideoPublishViewModel publishModel;
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) NSNumber localDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isFastImport;
- (void)updateCommentInfo:;
- (void)appendToPublishQueue;
- (id)publishModel;
- (void)setPublishModel:;
- (id)editService;
- (void)setEditService:;
- (id)timeFormatted:;
- (void).cxx_destruct;
- (id)duration;
- (id)thumb;
- (BOOL)isImage;
- (id)localDuration;
- (void)setLocalDuration:;
+ (id)mediaAssetWithPublishModel:;
+ (id)mediaAssetWithPublishModel:localDuration:;
@end
