@interface NSCKExportOperation : NSManagedObject
@property (nonatomic) NSNumber statusNum;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSCKExportMetadata exportMetadata;
@property (nonatomic) Q status;
@property (nonatomic) NSSet objects;
- (void)setStatus:;
- (unsigned long long)status;
+ (id)entityPath;
@end
