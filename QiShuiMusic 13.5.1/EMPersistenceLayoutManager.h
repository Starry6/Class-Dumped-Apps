@interface EMPersistenceLayoutManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)log;
+ (id)mailDataDirectoryPath;
+ (id)_nonContainerizedBaseMailDirectoryPathCreated:;
+ (id)baseMailDirectoryPath;
+ (id)mailAccountDirectory;
+ (id)baseMailDirectory;
+ (id)mailDataDirectory;
+ (id)mailAccountDirectoryPath;
@end
