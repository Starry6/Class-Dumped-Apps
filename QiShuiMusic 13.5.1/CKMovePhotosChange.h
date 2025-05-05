@interface CKMovePhotosChange : NSObject
@property (nonatomic) CKRecordID sourceRecordID;
@property (nonatomic) NSString sourceRecordChangeTag;
@property (nonatomic) CKRecord destinationRecord;
- (id)CKDescriptionPropertiesWithPublic:private:shouldExpand:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)sourceRecordID;
- (id)sourceRecordChangeTag;
- (id)destinationRecord;
- (void)setSourceRecordID:;
- (void)setSourceRecordChangeTag:;
- (void)setDestinationRecord:;
+ (BOOL)supportsSecureCoding;
@end
