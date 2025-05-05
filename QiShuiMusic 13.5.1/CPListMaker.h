@interface CPListMaker : NSObject
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (void)fetchTextLine:;
- (id)initWithLayoutArea:;
- (void)fetchTextLinesInColumn:;
- (void)makeListItemFrom:stopAt:;
- (BOOL)makeListFrom:;
- (void)makeListsInColumn:;
- (void)makeLists;
+ (void)makeListsInChunk:;
+ (void)makeListsInLayoutArea:;
+ (void)makeListsInPage:;
@end
