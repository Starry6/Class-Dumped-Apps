@interface YYTextArchiver : NSKeyedArchiver
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)archiver:willEncodeObject:;
- (id)initForWritingWithMutableData:;
+ (id)archivedDataWithRootObject:;
+ (BOOL)archiveRootObject:toFile:;
@end
