@interface AWEHPTabGuidePitayaAwemeResultModel : MTLModel
@property (nonatomic) NSString awemeID;
@property (nonatomic) AWEHPTabGuidePitayaLabelResultModel label;
@property (nonatomic) AWEHPTabGuidePitayaButtonResultModel button;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAwemeID:;
- (id)awemeID;
- (void)setLabel:;
- (void)setButton:;
- (id)label;
- (void).cxx_destruct;
- (id)button;
+ (id)labelJSONTransformer;
+ (id)buttonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
