@interface VCSProperty : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSArray values;
@property (nonatomic) VCSPropertyValue singleValue;
- (id)values;
- (id)initWithName:value:;
- (void).cxx_destruct;
- (id)name;
- (id)singleValue;
- (id)initWithName:values:;
- (id)initWithName:rawValues:type:;
- (id)initWithName:rawValue:type:;
- (id)initWithVCSLine:parseState:;
- (id)initISO8061Property:withParseState:property:;
- (id)initISO8061DateListProperty:withParseState:property:;
- (id)initEncodedTextProperty:withParseState:property:;
- (id)initIntProperty:withParseState:property:;
- (id)initURIProperty:withParseState:property:;
- (id)initClassificationProperty:withParseState:property:;
- (id)initStatusProperty:withParseState:property:;
- (id)initRecurrenceProperty:withParseState:property:;
- (id)initTranspProperty:withParseState:property:;
- (id)initKeywordListProperty:withParseState:property:;
- (id)initRFC822AddressProperty:withParseState:property:;
@end
