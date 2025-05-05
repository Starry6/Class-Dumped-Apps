@interface SANoteObject : SADomainObject
@property (nonatomic) NSString contents;
@property (nonatomic) NSDate createdDate;
@property (nonatomic) NSDate lastModifiedDate;
@property (nonatomic) BOOL restricted;
@property (nonatomic) NSString title;
- (id)createdDate;
- (id)groupIdentifier;
- (id)contents;
- (id)lastModifiedDate;
- (void)setCreatedDate:;
- (void)setTitle:;
- (void)setContents:;
- (id)title;
- (id)encodedClassName;
- (void)setLastModifiedDate:;
- (void)setRestricted:;
- (BOOL)restricted;
+ (id)object;
+ (id)objectWithDictionary:context:;
@end
