@interface IMNicknameEncryptionPreKey : NSObject
@property (nonatomic) NSData generatedData;
@property (nonatomic) NSData derivedData;
@property (nonatomic) IMNicknameFieldEncryptionKey fieldEncryptionKey;
@property (nonatomic) IMNicknameFieldTaggingKey fieldTaggingKey;
@property (nonatomic) IMNicknameRecordTaggingKey recordTaggingKey;
- (id)derivedData;
- (void).cxx_destruct;
- (void)setDerivedData:;
- (id)dataRepresentation;
- (id)initWithGeneratedData:derivedData:;
- (id)fieldEncryptionKey;
- (id)fieldTaggingKey;
- (id)recordTaggingKey;
- (id)_subDerivedKeyDataAtIndex:;
- (id)generatedData;
- (void)setGeneratedData:;
+ (id)generatePreKeyWithError:;
+ (id)preKeyWithDataRepresentation:error:;
@end
