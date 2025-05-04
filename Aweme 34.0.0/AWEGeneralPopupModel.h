@interface AWEGeneralPopupModel : MTLModel
@property (nonatomic) NSString id;
@property (nonatomic) q timing;
@property (nonatomic) q maximumTimesToShow;
@property (nonatomic) AWEGeneralPopupContentModel content;
@property (nonatomic) q showInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)showInterval;
- (void)setShowInterval:;
- (long long)maximumTimesToShow;
- (void)setMaximumTimesToShow:;
- (long long)timing;
- (id)content;
- (void)setTiming:;
- (id)id;
- (void)setContent:;
- (void).cxx_destruct;
- (void)setId:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)contentJSONTransformer;
@end
