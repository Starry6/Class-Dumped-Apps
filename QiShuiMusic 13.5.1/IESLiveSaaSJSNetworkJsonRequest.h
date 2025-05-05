@interface IESLiveSaaSJSNetworkJsonRequest : BDDynamicMTLModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString method;
@property (nonatomic) NSDictionary headers;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSDictionary data;
@property (nonatomic) NSString version;
@property (nonatomic) BOOL postMethodUseData;
@property (nonatomic) NSDictionary pbExtras;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pbExtras;
- (BOOL)postMethodUseData;
- (void)setPbExtras:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
