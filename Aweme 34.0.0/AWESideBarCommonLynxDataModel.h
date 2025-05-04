@interface AWESideBarCommonLynxDataModel : MTLModel
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL needLogin;
@property (nonatomic) NSString schemaUrl;
@property (nonatomic) NSString gayaToken;
@property (nonatomic) NSString accessibilityLabel;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSchemaUrl:;
- (id)schemaUrl;
- (BOOL)needLogin;
- (void)setNeedLogin:;
- (id)gayaToken;
- (void)setGayaToken:;
- (id)accessibilityLabel;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (void)setAccessibilityLabel:;
- (void).cxx_destruct;
- (double)startTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
