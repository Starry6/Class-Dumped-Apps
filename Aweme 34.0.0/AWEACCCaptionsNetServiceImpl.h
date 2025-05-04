@interface AWEACCCaptionsNetServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)queryCaptionWithTaskId:mandarinTranslation:completion:;
- (void)commitAudioWithMaterialId:maxLines:wordsPerLine:completion:;
- (void)feedbackCaptionWithAwemeId:taskID:vid:utterances:;
@end
