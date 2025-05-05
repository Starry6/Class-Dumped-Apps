@interface PLQuestion : PLManagedObject
@property (nonatomic) NSString uuid;
@property (nonatomic) NSString entityIdentifier;
@property (nonatomic) S type;
@property (nonatomic) S state;
@property (nonatomic) S entityType;
@property (nonatomic) S displayType;
@property (nonatomic) double score;
@property (nonatomic) NSDictionary additionalInfo;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) s questionVersion;
- (void)delete;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:withUUID:;
@end
