@interface CNCardPropertyGeminiGroup : CNCardPropertyGroup
@property (nonatomic) BOOL shouldShowGemini;
- (id)displayItems;
- (id)editingItems;
- (id)_loadPropertyItems;
- (void)setGeminiResult:;
- (BOOL)shouldShowGemini;
- (void)setShouldShowGemini:;
@end
