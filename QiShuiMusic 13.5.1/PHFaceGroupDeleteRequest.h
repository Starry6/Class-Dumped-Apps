@interface PHFaceGroupDeleteRequest : PHObjectDeleteRequest
- (BOOL)validateForDeleteManagedObject:error:;
- (void)deleteManagedObject:photoLibrary:;
@end
