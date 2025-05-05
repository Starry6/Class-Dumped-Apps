@interface PHSuggestionDeleteRequest : PHObjectDeleteRequest
- (BOOL)validateForDeleteManagedObject:error:;
- (void)deleteManagedObject:photoLibrary:;
@end
