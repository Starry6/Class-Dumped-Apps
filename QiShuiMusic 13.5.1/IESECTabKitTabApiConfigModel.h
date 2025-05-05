@interface IESECTabKitTabApiConfigModel : MTLModel
@property (nonatomic) NSString apiURL;
@property (nonatomic) NSString apiParams;
@property (nonatomic) NSArray appendAPIParamsKeys;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)apiParams;
- (id)apiURL;
- (id)appendAPIParamsKeys;
- (void)setApiParams:;
- (void)setApiURL:;
- (void)setAppendAPIParamsKeys:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
