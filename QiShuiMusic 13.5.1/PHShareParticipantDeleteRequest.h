@interface PHShareParticipantDeleteRequest : PHObjectDeleteRequest
- (BOOL)validateForDeleteManagedObject:error:;
- (void)deleteManagedObject:photoLibrary:;
@end
