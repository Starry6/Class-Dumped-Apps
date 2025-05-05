@interface IESLiveTogetherSlotMethodParamModel : IESLiveBridgeModel
@property (nonatomic) q type;
@property (nonatomic) NSArray slotInfo;
@property (nonatomic) NSString togetherId;
@property (nonatomic) NSNumber currentCount;
- (BOOL)modelCustomTransformFromDictionary:;
- (void)setSlotInfo:;
- (void)setTogetherId:;
- (id)slotInfo;
- (id)togetherId;
- (id)currentCount;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (void)setCurrentCount:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
