@interface MBFileSystemSnapshot : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString uuid;
@property (nonatomic) NSDate creationDate;
- (void)setName:;
- (void)setCreationDate:;
- (id)uuid;
- (void)setUuid:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)creationDate;
- (id)initWithName:uuid:creationDate:;
@end
