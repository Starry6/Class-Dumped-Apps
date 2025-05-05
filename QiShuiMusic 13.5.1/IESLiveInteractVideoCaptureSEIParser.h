@interface IESLiveInteractVideoCaptureSEIParser : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)seiType;
- (unsigned long long)supportSEIModes;
- (BOOL)checkTypeConditionWithMetaSEI:;
- (id)parserMetaSEI:;
- (id)seiRootKey;
+ (void)ieslivekit_register_sei_parser;
@end
