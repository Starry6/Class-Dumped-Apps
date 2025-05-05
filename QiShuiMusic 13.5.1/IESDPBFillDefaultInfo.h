@interface IESDPBFillDefaultInfo : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) IESDPBDefinitionNodeProperty value;
@property (nonatomic) NSMutableDictionary context;
- (BOOL)isFQValue;
- (BOOL)isMapValue;
- (BOOL)isNormalValue;
- (id)context;
- (id)key;
- (void)setKey:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (id)initWithKey:value:;
- (void)setContext:;
+ (void)fillDefaultValueFor:nodeProp:defConfig:context:;
@end
