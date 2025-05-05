@interface WBSPasswordBreachCredential : NSObject
@property (nonatomic) NSString password;
@property (nonatomic) NSData persistentIdentifier;
@property (nonatomic) NSDate dateLastModified;
- (id)password;
- (id)persistentIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSecItemDictionary:;
- (id)dateLastModified;
- (id)initWithPassword:persistentIdentifier:dateLastModified:;
@end
