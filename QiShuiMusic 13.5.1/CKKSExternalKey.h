@interface CKKSExternalKey : NSObject
@property (nonatomic) NSString view;
@property (nonatomic) NSString uuid;
@property (nonatomic) NSString parentKeyUUID;
@property (nonatomic) NSData keyData;
- (id)keyData;
- (id)uuid;
- (id)initWithCoder:;
- (id)view;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithView:uuid:parentTLKUUID:keyData:;
- (id)parentKeyUUID;
+ (BOOL)supportsSecureCoding;
+ (id)parseFromJSONDict:error:;
@end
