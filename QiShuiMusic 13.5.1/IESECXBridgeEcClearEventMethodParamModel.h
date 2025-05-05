@interface IESECXBridgeEcClearEventMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString eventName;
@property (nonatomic) NSNumber isSticky;
@property (nonatomic) NSNumber timestampLower;
@property (nonatomic) NSNumber timestampUpper;
- (void)setIsSticky:;
- (void)setTimestampLower:;
- (void)setTimestampUpper:;
- (id)timestampLower;
- (id)timestampUpper;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)isSticky;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
