@interface AWEACCGrootStickerNetServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestCheckGrootRecognitionWith:creationId:cameraDirection:completion:;
- (void)requestFetchGrootRecognitionListWith:creationId:cameraDirection:completion:;
@end
