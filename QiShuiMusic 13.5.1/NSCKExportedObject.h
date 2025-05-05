@interface NSCKExportedObject : NSManagedObject
@property (nonatomic) NSNumber changeTypeNum;
@property (nonatomic) NSNumber typeNum;
@property (nonatomic) NSString ckRecordName;
@property (nonatomic) NSString zoneName;
@property (nonatomic) q changeType;
@property (nonatomic) Q type;
@property (nonatomic) NSCKExportOperation operation;
- (long long)changeType;
- (void)setType:;
- (void)setChangeType:;
- (unsigned long long)type;
+ (id)entityPath;
@end
