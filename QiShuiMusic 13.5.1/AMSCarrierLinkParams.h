@interface AMSCarrierLinkParams : NSObject
@property (nonatomic) NSString adamId;
@property (nonatomic) NSDictionary dictionary;
@property (nonatomic) NSString linkParamsString;
- (id)dictionary;
- (id)adamId;
- (id)initWithString:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)linkParamsString;
+ (BOOL)supportsSecureCoding;
+ (id)_queryDictionaryFromString:;
@end
