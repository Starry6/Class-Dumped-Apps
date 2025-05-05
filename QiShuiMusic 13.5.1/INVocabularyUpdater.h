@interface INVocabularyUpdater : _INVocabularyConnection
- (void)setValidatedVocabulary:forIntentSlot:onBehalfOf:validationCompletion:;
- (void)setValidatedVocabulary:forIntentSlot:validationCompletion:;
- (void)setCustomPhotoAlbumNames:;
+ (id)_sharedAppInstance;
+ (void)clearAllCustomVocabulary;
+ (void)clearAllCustomVocabularyOnBehalfOf:;
@end
