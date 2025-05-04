@interface AWEOpenAuthInfoProtocolInfoDataV4 : MTLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray fullPageProtocolList;
@property (nonatomic) BOOL isSelect;
@property (nonatomic) BOOL protoShow;
- (void)setIsSelect:;
- (BOOL)isSelect;
- (id)fullPageProtocolList;
- (void)setFullPageProtocolList:;
- (BOOL)protoShow;
- (void)setProtoShow:;
- (void).cxx_destruct;
+ (id)fullPageProtocolListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
