@interface IESLiveSaaSSendGiftSchemaParser : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_parserFansGroupWithParamters:;
- (BOOL)p_isVSRoom;
- (void)p_parserSendGiftWithParamters:;
- (void)parseWithParams:fromInside:completion:;
- (id)roomService;
+ (void)ieslivekit_register_schema;
@end
