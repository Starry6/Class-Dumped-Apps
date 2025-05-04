@interface AWEPOIDetailInfoDynamicModel : MTLModel
@property (nonatomic) q identifier;
@property (nonatomic) q type;
@property (nonatomic) AWEPOILynxModel lynx;
@property (nonatomic) q showDelay;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShowDelay:;
- (long long)showDelay;
- (void)setLynx:;
- (id)lynx;
- (void)setIdentifier:;
- (long long)identifier;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
