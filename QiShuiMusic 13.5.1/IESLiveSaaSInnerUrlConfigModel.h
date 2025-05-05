@interface IESLiveSaaSInnerUrlConfigModel : BDDynamicMTLModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString reqFrom;
@property (nonatomic) NSString innerUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)evaluateForEnterFrom:enterMethod:;
- (BOOL)p_isValidInnerUrlConfig;
+ (id)JSONKeyPathsByPropertyKey;
+ (Class)classForParsingJSONDictionary:;
@end
