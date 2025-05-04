@interface AWEShareTargetSettings : MTLModel
@property (nonatomic) Q targetType;
@property (nonatomic) NSString shareMode;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)targetType;
- (void).cxx_destruct;
- (void)setTargetType:;
- (void)setShareMode:;
- (id)shareMode;
+ (id)shareModeJSONTransformer;
+ (id)targetTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
