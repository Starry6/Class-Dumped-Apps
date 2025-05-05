@interface IESECLiveLayoutCompleteModel : MTLModel
@property (nonatomic) NSArray elements;
@property (nonatomic) NSNumber layoutHeight;
@property (nonatomic) q layoutStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLayoutHeight:;
- (long long)layoutStyle;
- (id)elements;
- (void)setLayoutStyle:;
- (void)setElements:;
- (void).cxx_destruct;
- (id)layoutHeight;
+ (id)elementsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
