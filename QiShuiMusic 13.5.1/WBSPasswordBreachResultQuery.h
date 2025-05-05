@interface WBSPasswordBreachResultQuery : NSObject
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData persistentIdentifier;
@property (nonatomic) NSDate dateLastModified;
- (id)persistentIdentifier;
- (id)initWithDictionaryRepresentation:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dateLastModified;
- (id)initWithPersistentIdentifier:dateLastModified:;
+ (id)resultQueriesFromDictionaryRepresentations:;
+ (id)dictionaryRepresentationsForResultQueries:;
@end
