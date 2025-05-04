@interface AWEStudioCaptionCommitModel : ACCBaseApiModel
@property (nonatomic) AWEStudioCaptionQueryModel videoCaption;
@property (nonatomic) BOOL mandarinTranslationDisabled;
@property (nonatomic) NSString language;
- (id)videoCaption;
- (BOOL)mandarinTranslationDisabled;
- (void)setVideoCaption:;
- (void)setMandarinTranslationDisabled:;
- (void)setLanguage:;
- (void).cxx_destruct;
- (id)language;
+ (id)captionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
