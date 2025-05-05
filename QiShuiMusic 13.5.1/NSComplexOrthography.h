@interface NSComplexOrthography : NSOrthography
- (void)dealloc;
- (id)initWithDominantScript:languageMap:;
- (id)dominantScript;
- (id)languageMap;
- (unsigned int)orthographyFlags;
@end
