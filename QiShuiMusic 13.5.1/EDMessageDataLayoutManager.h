@interface EDMessageDataLayoutManager : NSObject
+ (id)messageDataDirectoryURLForGlobalMessageID:basePath:purgeable:;
+ (id)rootMessageDataDirectoryForBasePath:purgeable:;
@end
