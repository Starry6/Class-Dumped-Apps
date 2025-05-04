@interface AWEDynamicPatchAdDataModel : MTLModel
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSNumber creativeID;
@property (nonatomic) NSNumber groupID;
@property (nonatomic) NSNumber adID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLogExtra:;
- (id)logExtra;
- (id)adID;
- (void)setAdID:;
- (void)setCreativeID:;
- (void)setGroupID:;
- (id)groupID;
- (void).cxx_destruct;
- (id)creativeID;
+ (id)JSONKeyPathsByPropertyKey;
@end
