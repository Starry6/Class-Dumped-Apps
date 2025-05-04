@interface AWEDTOReshootModel : MTLModel
@property (nonatomic) NSArray fragments;
@property (nonatomic) AWEDTOClipRangeEntry clipRange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)clipRange;
- (void)setClipRange:;
- (void).cxx_destruct;
- (id)fragments;
- (void)setFragments:;
+ (id)clipRangeJSONTransformer;
+ (id)acc_JSONKeyPathsByPropertyKey;
+ (void)_aweLazyRegisterLoad_Draft;
+ (id)fragmentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
