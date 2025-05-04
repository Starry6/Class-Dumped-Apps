@interface AWEIMFriendWidgetGuideResource : NSObject
@property (nonatomic) AWEIMMD5ResourceFileConfig fileConfig;
@property (nonatomic) NSString pipGuideVideoPath;
@property (nonatomic) NSString guideImagePath;
@property (nonatomic) BOOL isResourceReady;
- (id)pipGuideVideoPath;
- (void)setFileConfig:;
- (id)guideImagePath;
- (id)fileConfig;
- (BOOL)isResourceReady;
- (void)downloadResourcesIfNeeded;
- (void)setPipGuideVideoPath:;
- (void)setGuideImagePath:;
- (id)init;
- (void).cxx_destruct;
@end
