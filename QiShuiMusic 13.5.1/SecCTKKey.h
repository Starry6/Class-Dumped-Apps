@interface SecCTKKey : NSObject
@property (nonatomic) TKClientTokenObject tokenObject;
@property (nonatomic) NSDictionary keychainAttributes;
@property (nonatomic) NSDictionary sessionParameters;
@property (nonatomic) q algorithmID;
- (void)setSessionParameters:;
- (void)setTokenObject:;
- (id)keychainAttributes;
- (id)initFromKey:;
- (void).cxx_destruct;
- (id)tokenObject;
- (id)performOperation:data:algorithms:parameters:error:;
- (id)sessionParameters;
- (id)initWithAttributes:error:;
- (long long)algorithmID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)fromKeyRef:;
@end
