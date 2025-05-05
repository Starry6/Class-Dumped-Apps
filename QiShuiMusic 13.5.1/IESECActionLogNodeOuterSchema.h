@interface IESECActionLogNodeOuterSchema : IESECActionLogNodeBase
@property (nonatomic) NSString routeName;
@property (nonatomic) NSString schemaParams;
@property (nonatomic) NSDictionary schemaDict;
- (id)schemaParams;
- (void)setSchemaParams:;
- (id)initWithCoder:;
- (id)routeName;
- (void)encodeWithCoder:;
- (long long)type;
- (id)schemaDict;
- (void).cxx_destruct;
- (id)info;
- (void)setRouteName:;
- (void)setSchemaDict:;
- (id)copyWithZone:;
@end
