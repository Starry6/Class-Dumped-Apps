@interface WBSPasswordBreachResultRecord : NSObject
@property (nonatomic) NSData persistentIdentifier;
@property (nonatomic) Q result;
@property (nonatomic) NSDate dateLastModified;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (unsigned long long)result;
- (id)persistentIdentifier;
- (id)initWithDictionaryRepresentation:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dateLastModified;
- (id)initWithPersistentIdentifier:result:dateLastModified:;
+ (id)resultRecordsFromDictionaryRepresentations:;
+ (id)dictionaryRepresentationsForResultRecords:;
@end
