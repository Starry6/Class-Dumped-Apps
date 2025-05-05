@interface VSTrialVoiceResource : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) NSString language;
@property (nonatomic) Q version;
- (id)path;
- (void)setLanguage:;
- (id)language;
- (void)setVersion:;
- (unsigned long long)version;
- (void)setPath:;
- (id)initWithFactorName:;
- (id)initWithLanguage:;
- (void).cxx_destruct;
- (id)factorName;
- (BOOL)isLocal;
- (id)initWithFactorLevel:;
@end
