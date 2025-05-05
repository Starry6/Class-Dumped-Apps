@interface NEPolicySessionFileHandle : NEFileHandle
@property (nonatomic) NSString name;
- (id)dictionary;
- (id)initWithPolicySession:name:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initFromDictionary:;
- (id)description;
- (id)initWithPolicySession:;
- (id)name;
@end
