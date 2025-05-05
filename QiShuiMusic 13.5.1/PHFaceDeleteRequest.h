@interface PHFaceDeleteRequest : PHObjectDeleteRequest
- (BOOL)validateForDeleteManagedObject:error:;
- (void)deleteManagedObject:photoLibrary:;
@end
