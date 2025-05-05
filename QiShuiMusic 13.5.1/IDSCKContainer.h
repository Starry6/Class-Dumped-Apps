@interface IDSCKContainer : NSObject
@property (nonatomic) NSString containerIdentifier;
@property (nonatomic) IDSCKDatabase privateCloudDatabase;
@property (nonatomic) IDSCKDatabase publicCloudDatabase;
- (id)containerIdentifier;
- (void).cxx_destruct;
- (id)privateCloudDatabase;
- (id)publicCloudDatabase;
+ (id)containerWithIdentifier:;
+ (Class)__class;
@end
