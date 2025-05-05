@interface BDRuleParameterBuilderModel : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) Q origin;
@property (nonatomic) Q type;
@property (nonatomic) @? builder;
@property (nonatomic) @ value;
- (id)init;
- (void)setOrigin:;
- (id)key;
- (void)setType:;
- (unsigned long long)origin;
- (id)builder;
- (void)setKey:;
- (void)setValue:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)value;
- (void)setBuilder:;
@end
