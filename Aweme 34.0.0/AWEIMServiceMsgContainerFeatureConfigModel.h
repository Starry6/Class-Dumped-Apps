@interface AWEIMServiceMsgContainerFeatureConfigModel : AWEBaseApiModel
@property (nonatomic) NSArray notShowItemList;
@property (nonatomic) NSNumber inputStyle;
@property (nonatomic) NSArray showItemList;
- (id)notShowItemList;
- (id)inputStyle;
- (id)showItemList;
- (void).cxx_destruct;
+ (id)generateFromDict:;
+ (id)JSONKeyPathsByPropertyKey;
@end
