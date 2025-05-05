@interface CSSearchContext : NSObject
@property (nonatomic) Q queryID;
@property (nonatomic) NSString userQuery;
@property (nonatomic) Q maxItemsCount;
@property (nonatomic) NSString keyboardLanguage;
@property (nonatomic) NSArray preferredLanguages;
@property (nonatomic) NSString markedText;
@property (nonatomic) Q markedTextStart;
@property (nonatomic) NSObject<OS_xpc_object> xpc_dictionary;
- (unsigned long long)queryID;
- (id)xpc_dictionary;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)markedText;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (id)preferredLanguages;
- (void).cxx_destruct;
- (id)description;
- (id)keyboardLanguage;
- (BOOL)isEqual:;
- (id)userQuery;
- (id)copyWithZone:;
- (id)initWithQueryID:userQuery:maxItemsCount:keyboardLanguage:preferredLanguages:;
- (id)initWithQueryID:userQuery:maxItemsCount:keyboardLanguage:preferredLanguages:markedText:markedTextStart:;
- (unsigned long long)maxItemsCount;
- (unsigned long long)markedTextStart;
+ (BOOL)supportsSecureCoding;
@end
