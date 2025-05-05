@interface AnnieLegacyMethodInfo : NSObject
@property (nonatomic) NSString methodName;
@property (nonatomic) # methodClass;
@property (nonatomic) : methodSelector;
@property (nonatomic) BOOL isSession;
@property (nonatomic) Q authType;
- (void)setMethodClass:;
- (Class)methodClass;
- (void)setMethodSelector:;
- (void)setAuthType:;
- (unsigned long long)authType;
- (void).cxx_destruct;
- (id)methodName;
- (void)setMethodName:;
- (BOOL)isSession;
- (void)setIsSession:;
- (SEL)methodSelector;
+ (id)infoWithData:;
@end
