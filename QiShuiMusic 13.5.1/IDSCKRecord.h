@interface IDSCKRecord : NSObject
@property (nonatomic) IDSCKRecordID recordID;
@property (nonatomic) <IDSCKRecordKeyValueSetting> encryptedValuesByKey;
- (id)recordID;
- (void).cxx_destruct;
- (id)encryptedValuesByKey;
+ (id)alloc;
+ (Class)__class;
@end
