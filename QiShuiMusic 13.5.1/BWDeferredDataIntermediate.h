@interface BWDeferredDataIntermediate : BWDeferredIntermediate
- (void)dealloc;
- (id)description;
- (id)fetchAndRetain:;
- (int)setArchive:;
- (id)fetchWithCustomClassesAndRetain:err:;
@end
