@interface AWEDTOBirthdayModel : MTLModel
@property (nonatomic) NSArray templates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)templates;
- (void)setTemplates:;
+ (id)templatesJSONTransformer;
+ (id)acc_JSONKeyPathsByPropertyKey;
+ (void)_aweLazyRegisterLoad_Draft;
+ (id)JSONKeyPathsByPropertyKey;
@end
