@interface CVAVideoPipelineLibrarySPI : NSObject
+ (BOOL)updateRequestWithLiveData:mattingRequest:faceKitProcessOutput:error:;
+ (id)portraitRequestWithBackground:light:post:isTmpConfig:error:;
@end
