@interface ARXPCDictionaryWrapper : NSObject
@property (nonatomic) NSObject<OS_xpc_object> dictionary;
- (id)dictionary;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
+ (id)wrapperWithDictionary:;
@end
