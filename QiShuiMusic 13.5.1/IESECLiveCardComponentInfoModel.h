@interface IESECLiveCardComponentInfoModel : MTLModel
@property (nonatomic) q componentType;
@property (nonatomic) q componentDefaultStatus;
@property (nonatomic) NSNumber componentKeepShowTime;
@property (nonatomic) IESECLiveCardSizeComponentModel sizeInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)componentDefaultStatus;
- (id)componentKeepShowTime;
- (void)setComponentDefaultStatus:;
- (void)setComponentKeepShowTime:;
- (void)setSizeInfo:;
- (long long)componentType;
- (void)setComponentType:;
- (id)sizeInfo;
- (void).cxx_destruct;
+ (id)sizeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
