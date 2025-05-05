@interface CJPayPrefetchRequestModel : JSONModel
@property (nonatomic) NSString api;
@property (nonatomic) NSString method;
@property (nonatomic) NSString dataType;
@property (nonatomic) NSDictionary data;
@property (nonatomic) NSString path;
@property (nonatomic) NSDictionary dataFields;
@property (nonatomic) NSArray hosts;
@property (nonatomic) NSArray dataToJSONKeyPaths;
- (id)dataToJSONKeyPaths;
- (void)setDataFields:;
- (void)setDataToJSONKeyPaths:;
- (id)path;
- (void)setDataType:;
- (id)data;
- (void)setPath:;
- (id)method;
- (id)dataType;
- (id)hosts;
- (void).cxx_destruct;
- (void)setHosts:;
- (void)setData:;
- (void)setMethod:;
- (id)api;
- (void)setApi:;
- (id)dataFields;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
