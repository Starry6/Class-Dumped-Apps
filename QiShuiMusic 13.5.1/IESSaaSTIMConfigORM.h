@interface IESSaaSTIMConfigORM : IESSaaSTIMBaseORM
@property (nonatomic) NSString key;
@property (nonatomic) NSString textValue;
@property (nonatomic) q integerValue;
@property (nonatomic) double realValue;
@property (nonatomic) NSData blobValue;
- (id)key;
- (void)setKey:;
- (void).cxx_destruct;
- (long long)integerValue;
- (void)setIntegerValue:;
- (double)realValue;
- (void)setRealValue:;
- (id)textValue;
- (void)setTextValue:;
- (void)setBlobValue:;
- (id)blobValue;
+ (id)AllProperties;
+ (id)AnyProperty;
+ (id)PropertyNamed;
+ (id)objectRelationalMappingForWCDB;
+ (id)key;
+ (id)integerValue;
+ (id)realValue;
+ (id)textValue;
+ (id)blobValue;
@end
