@interface AWEPOIItemAnchorBottomButtonModel : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) AWEPOISchemaModel schemaModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)schemaModel;
- (void)setSchemaModel:;
- (void)setIconURL:;
- (id)iconURL;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
