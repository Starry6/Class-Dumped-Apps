@interface BYChronicleEntry : NSObject
@property (nonatomic) NSString productVersion;
- (void)setProductVersion:;
- (id)productVersion;
- (id)init;
- (BOOL)isEqualToEntry:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)initWithProductVersion:;
- (BOOL)createdOnCurrentMajorVersion;
@end
