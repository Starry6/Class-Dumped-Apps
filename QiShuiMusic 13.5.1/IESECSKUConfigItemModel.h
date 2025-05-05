@interface IESECSKUConfigItemModel : MTLModel
@property (nonatomic) IESECSKUViewConfigModel viewObj;
@property (nonatomic) IESECSKUBlankConfigModel blankObj;
@property (nonatomic) IESECURLModel imageObj;
@property (nonatomic) IESECSKUTextConfigModel textObj;
@property (nonatomic) NSDictionary showEventParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)showEventParams;
- (id)textObj;
- (id)viewObj;
- (id)blankObj;
- (void)setBlankObj:;
- (void)setShowEventParams:;
- (void)setTextObj:;
- (void)setViewObj:;
- (void).cxx_destruct;
- (id)imageObj;
- (void)setImageObj:;
+ (id)JSONKeyPathsByPropertyKey;
@end
