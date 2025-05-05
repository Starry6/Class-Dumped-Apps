@interface ECTaggedHeaderParser : NSObject
@property (nonatomic) NSMutableDictionary headerFields;
@property (nonatomic) NSError parseError;
- (void).cxx_destruct;
- (id)headerFields;
- (id)parseError;
- (id)initWithHeaderBody:;
- (id)_parseTagValueList:;
- (id)_errorWithType:reason:;
+ (id)taggedHeaderFromDictionary:;
@end
