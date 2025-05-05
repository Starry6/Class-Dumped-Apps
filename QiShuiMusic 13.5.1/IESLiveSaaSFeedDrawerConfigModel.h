@interface IESLiveSaaSFeedDrawerConfigModel : BDDynamicMTLModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString reqFrom;
@property (nonatomic) NSString url;
@property (nonatomic) NSString innerUrl;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL enableMultiTab;
@property (nonatomic) BOOL enableReplaceRecommend;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)evaluateForEnterFrom:enterMethod:;
+ (id)JSONKeyPathsByPropertyKey;
+ (Class)classForParsingJSONDictionary:;
@end
