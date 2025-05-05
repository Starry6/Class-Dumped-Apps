@interface IESLiveSaaSTheGreatCardSchemaParser : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)parseWithParams:fromInside:completion:;
- (id)init;
+ (void)ieslivekit_register_schema;
@end
