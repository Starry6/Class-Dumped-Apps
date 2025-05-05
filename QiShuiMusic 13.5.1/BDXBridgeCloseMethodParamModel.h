@interface BDXBridgeCloseMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString containerID;
@property (nonatomic) BOOL animated;
@property (nonatomic) NSArray containerIDs;
- (void)setAnimated:;
- (BOOL)animated;
- (id)containerID;
- (void)setContainerID:;
- (id)containerIDs;
- (void).cxx_destruct;
- (void)setContainerIDs:;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;
@end
