@interface IESLiveAnchorInteractInfoModel : MTLModel
@property (nonatomic) NSNumber layoutType;
@property (nonatomic) NSString focusId;
@property (nonatomic) NSNumber scaleType;
@property (nonatomic) NSNumber alignMode;
@property (nonatomic) NSNumber ownerIndex;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)focusId;
- (id)alignMode;
- (void)setAlignMode:;
- (void)setFocusId:;
- (id)layoutType;
- (void)setLayoutType:;
- (void).cxx_destruct;
- (id)scaleType;
- (void)setScaleType:;
- (id)ownerIndex;
- (void)setOwnerIndex:;
+ (id)JSONKeyPathsByPropertyKey;
@end
