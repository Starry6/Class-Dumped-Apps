@interface PHPhotosHighlightDeleteRequest : PHObjectDeleteRequest
- (BOOL)validateForDeleteManagedObject:error:;
- (void)deleteManagedObject:photoLibrary:;
@end
