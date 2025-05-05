@interface CKObjectDescription : NSObject
@property (nonatomic) BOOL redact;
@property (nonatomic) BOOL avoidShortDescription;
@property (nonatomic) NSString descriptionPrefix;
@property (nonatomic) CKOrderedDictionary orderedDictionary;
@property (nonatomic) BOOL printAsDictionary;
- (void)setDescriptionPrefix:;
- (id)_dictionaryDescription:shouldRedact:;
- (id)initWithObject:redact:;
- (void)addPropertyIfExists:value:shouldRedact:;
- (id)orderedDictionary;
- (void)setPrintAsDictionary:;
- (id)descriptionPrefix;
- (void)_addProperty:value:shouldRedact:;
- (void)addProperty:value:shouldRedact:;
- (id)unorderedDictionary;
- (BOOL)avoidShortDescription;
- (void).cxx_destruct;
- (id)initWithObject:redact:avoidShortDescription:;
- (id)_propertyDescriptionForProperty:shouldRedact:;
- (BOOL)redact;
- (id)description;
- (BOOL)printAsDictionary;
- (void)setOrderedDictionary:;
- (void)addFlagsForKey:flagsAndConditions:;
- (id)_arrayDescription:shouldRedact:;
@end
