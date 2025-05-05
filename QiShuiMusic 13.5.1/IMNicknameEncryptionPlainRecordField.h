@interface IMNicknameEncryptionPlainRecordField : NSObject
@property (nonatomic) NSString fieldName;
@property (nonatomic) NSData plainData;
- (void)setFieldName:;
- (id)fieldName;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFieldName:plainData:;
- (id)plainData;
- (void)setPlainData:;
@end
