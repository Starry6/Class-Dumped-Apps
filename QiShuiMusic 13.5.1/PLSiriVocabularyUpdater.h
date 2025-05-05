@interface PLSiriVocabularyUpdater : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithVocabularyService:photoLibrary:;
- (void)updateAllVocabularies;
- (void)_updateAlbumsVocabularyInContext:;
- (id)_fetchAlbumDictionariesInContext:;
- (void)updateAlbumVocabularyFromAlbumDictionaries:;
- (id)_albumTitlesFromDictionaries:;
- (id)_userAlbumInfoFromDictionaries:;
- (id)localizedTitleForAlbumDictionary:;
- (void)_updateContactsVocabularyInContext:;
- (id)_fetchPersonDictionariesInContext:;
- (void)updateContactVocabularyFromPersonDictionaries:;
- (id)personNamesFromDictionaries:;
+ (void)updateAllVocabulariesInLibrary:withService:;
@end
