@interface AWEPOILynxInjectParamsModel : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString localKey;
@property (nonatomic) q type;
@property (nonatomic) @ staticValue;
@property (nonatomic) @ defaultValue;
@property (nonatomic) q target;
@property (nonatomic) BOOL isForceRewrite;
- (void)setLocalKey:;
- (void)setStaticValue:;
- (void)setIsForceRewrite:;
- (id)localKey;
- (BOOL)isForceRewrite;
- (id)defaultValue;
- (void)setDefaultValue:;
- (long long)target;
- (void)setKey:;
- (id)key;
- (long long)type;
- (void)setTarget:;
- (void)setType:;
- (void).cxx_destruct;
- (id)staticValue;
@end
