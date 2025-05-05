@interface CUINamedRecognitionGroup : CUINamedLookup
- (void)dealloc;
- (id)initWithName:contentsFromCatalog:usingRenditionKey:fromTheme:;
- (id)namedRecognitionItemList;
- (id)namedRecognitionImageImageList;
- (id)namedRecognitionObjectObjectList;
- (id)recognitionItemsWithName:;
- (id)recognitionImageWithName:;
- (id)recognitionObjectWithName:;
@end
