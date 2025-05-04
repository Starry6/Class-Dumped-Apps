@interface AWEDTOInstanceContextModel : MTLModel
@property (nonatomic) NSString zipUri;
@property (nonatomic) NSString instanceId;
@property (nonatomic) Q subMediaType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)zipUri;
- (void)setZipUri:;
- (unsigned long long)subMediaType;
- (void)setSubMediaType:;
- (id)instanceId;
- (void).cxx_destruct;
- (void)setInstanceId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
