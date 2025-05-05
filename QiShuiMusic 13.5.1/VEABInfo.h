@interface VEABInfo : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) Q dataType;
@property (nonatomic) @ defaultVal;
@property (nonatomic) NSString desc;
@property (nonatomic) Q configType;
@property (nonatomic) Q keySource;
- (id)convertToDic;
- (id)defaultVal;
- (void)setDefaultVal:;
- (id)initWithKey:defaultString:description:;
- (id)initWithKey:defaultInt:description:;
- (id)initWithKey:defaultFloat:description:;
- (id)initWithKey:defaultBool:description:;
- (void)setDataType:;
- (id)desc;
- (id)key;
- (void)setDesc:;
- (unsigned long long)dataType;
- (void)setKeySource:;
- (void)setKey:;
- (unsigned long long)keySource;
- (void).cxx_destruct;
- (unsigned long long)configType;
- (void)setConfigType:;
@end
