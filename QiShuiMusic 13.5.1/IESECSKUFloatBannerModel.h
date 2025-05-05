@interface IESECSKUFloatBannerModel : MTLModel
@property (nonatomic) IESECSKUViewConfigModel background;
@property (nonatomic) NSArray contents;
@property (nonatomic) NSDictionary showEventParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)showEventParams;
- (void)setShowEventParams:;
- (id)background;
- (void)setBackground:;
- (id)contents;
- (void)setContents:;
- (void).cxx_destruct;
+ (id)contentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
