@interface BDATMacroToken : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)key;
- (id)debugDescription;
- (void)setKey:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (BOOL)isEqual:;
+ (void)checkMacro:macros:adId:label:;
+ (id)macroTokens:builder:;
+ (id)processMacro:macros:error:;
+ (id)urlMacroToken:value:;
@end
