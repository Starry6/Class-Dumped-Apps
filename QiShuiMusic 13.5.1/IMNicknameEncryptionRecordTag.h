@interface IMNicknameEncryptionRecordTag : IMNicknameEncryptionTag
- (BOOL)isEqualToTag:error:;
+ (id)tagWithDataRepresentation:error:;
+ (id)tagWithStringRepresentation:error:;
@end
