@interface AWEProfileUpstairShopEntranceModel : MTLModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSString pullTextNormal;
@property (nonatomic) NSString pullTextEnter;
@property (nonatomic) NSDictionary trackParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackParams;
- (void)setTrackParams:;
- (id)pullTextNormal;
- (id)pullTextEnter;
- (void)setPullTextNormal:;
- (void)setPullTextEnter:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
