@interface BDXBridgeShowBottomNotificationMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString content;
@property (nonatomic) NSNumber type;
@property (nonatomic) NSString linkSchema;
@property (nonatomic) NSString linkText;
@property (nonatomic) NSNumber linkGrade;
- (id)linkGrade;
- (id)linkSchema;
- (void)setLinkGrade:;
- (void)setLinkSchema:;
- (id)content;
- (void)setContent:;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
- (id)linkText;
- (void)setLinkText:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
