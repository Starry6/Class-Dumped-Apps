@interface AWEECOMIMDetailPlatformDynamicCardConfigItemModel : MTLModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSString devSchema;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString techType;
@property (nonatomic) BOOL isLargeCard;
@property (nonatomic) BOOL enableClientBff;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isLargeCard;
- (id)devSchema;
- (void)setDevSchema:;
- (id)techType;
- (void)setTechType:;
- (void)setIsLargeCard:;
- (BOOL)enableClientBff;
- (void)setEnableClientBff:;
- (id)schema;
- (void)setSchema:;
- (id)channel;
- (void)setChannel:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
