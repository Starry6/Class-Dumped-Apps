@interface AWEIMParseSchemaActionModel : MTLModel
@property (nonatomic) NSString statusCode;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSString targetSchema;
@property (nonatomic) NSDictionary extraInfoDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)statusMsg;
- (void)setStatusMsg:;
- (id)targetSchema;
- (void)setTargetSchema:;
- (void)setExtraInfoDict:;
- (id)extraInfoDict;
- (id)statusCode;
- (void).cxx_destruct;
- (void)setStatusCode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
