@interface EDPersonaPersistenceLayoutManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)log;
+ (id)baseAccountDirectoryPathForPersonaIdentifier:;
+ (id)baseAccountDirectoryForPersonaIdentifier:;
+ (id)macOS_baseAccountDirectoryPathForPersonaIdentifier:;
+ (id)iOS_baseAccountDirectoryPathForPersonaIdentifier:;
@end
