@interface AWEMVTemplateValidateResultModel : MTLModel
@property (nonatomic) Q templateID;
@property (nonatomic) BOOL valid;
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)valid;
- (void)setValid:;
- (unsigned long long)templateID;
- (void)setTemplateID:;
- (long long)type;
- (void)setType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
