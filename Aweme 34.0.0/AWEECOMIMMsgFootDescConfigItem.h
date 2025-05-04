@interface AWEECOMIMMsgFootDescConfigItem : NSObject
@property (nonatomic) NSString modelClassString;
@property (nonatomic) NSString extType;
@property (nonatomic) NSString cardType;
@property (nonatomic) NSString templateType;
@property (nonatomic) NSString cardEntityType;
@property (nonatomic) NSString cardSourceScene;
@property (nonatomic) Q operation;
- (void)setExtType:;
- (id)extType;
- (id)cardSourceScene;
- (id)cardEntityType;
- (id)modelClassString;
- (void)setModelClassString:;
- (void)setCardEntityType:;
- (void)setCardSourceScene:;
- (unsigned long long)operation;
- (void)setOperation:;
- (id)templateType;
- (void).cxx_destruct;
- (void)setTemplateType:;
- (id)initWithDict:;
- (id)cardType;
- (void)setCardType:;
+ (unsigned long long)operationWithString:;
@end
