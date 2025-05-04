@interface AWEMinorGrootBarModel : MTLModel
@property (nonatomic) NSString speciesID;
@property (nonatomic) NSString speciesDescription;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString speciesName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)speciesID;
- (void)setSpeciesID:;
- (id)speciesName;
- (id)speciesDescription;
- (void)setSpeciesDescription:;
- (void)setSpeciesName:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
