@interface IMNicknameEncryptionCipherRecordField : NSObject
@property (nonatomic) NSString fieldName;
@property (nonatomic) NSData cipherData;
@property (nonatomic) NSData IV;
@property (nonatomic) IMNicknameEncryptionFieldTag tag;
- (id)tag;
- (void)setFieldName:;
- (id)fieldName;
- (void)setTag:;
- (id)dataRepresentationWithError:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFieldName:cipherData:IV:tag:;
- (id)cipherData;
- (void)setCipherData:;
- (id)IV;
- (void)setIV:;
+ (id)cipherRecordFieldWithFieldName:dataRepresentation:error:;
@end
