@interface IESLiveEffectMixInfoHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)generateContainerWithAlignment:;
- (void)buildEffectMixInfoWithUserEnterEffectConfig:withDIContext:completion:;
- (id)generateAspectFitImageWithContent:container:contentSize:containerSize:;
- (id)generateImageWithContent:containerSize:container:;
- (id)generateImageWithContent:containerSize:effectNode:templateConfig:useContentSize:diContext:;
- (id)generateTemplateEngineConfigWithPieceValues:;
- (id)playerSizeFromVideoData:;
- (id)readPlayerVideoDataWithEffectID:error:;
@end
