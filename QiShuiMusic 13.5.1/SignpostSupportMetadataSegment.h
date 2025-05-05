@interface SignpostSupportMetadataSegment : NSObject
@property (nonatomic) NSString typeNamespace;
@property (nonatomic) NSString type;
@property (nonatomic) NSArray placeholderTokens;
@property (nonatomic) NSString stringPrefix;
@property (nonatomic) SignpostSupportMessageArgument argument;
- (id)initWithArgumentObject:typeNamespace:type:tokens:stringPrefix:;
- (id)initWithDictionary:;
- (id)_dictionaryRepresentationWithIsHumanReadable:shouldRedact:didRedactOut:;
- (id)type;
- (void).cxx_destruct;
- (id)placeholderTokens;
- (id)typeNamespace;
- (BOOL)isEqual:;
- (id)stringPrefix;
- (id)argument;
@end
