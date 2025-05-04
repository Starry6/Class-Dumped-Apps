@interface AWEECOMIMDynamicCardPerfLoadJSEvent : MTLModel
@property (nonatomic) NSString channel;
@property (nonatomic) NSString bundle;
@property (nonatomic) NSString loadFrom;
@property (nonatomic) q loadJSTime;
@property (nonatomic) q executeJSTime;
@property (nonatomic) q totalTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)loadFrom;
- (long long)loadJSTime;
- (long long)executeJSTime;
- (void)setLoadFrom:;
- (void)setLoadJSTime:;
- (void)setExecuteJSTime:;
- (long long)totalTime;
- (id)channel;
- (id)bundle;
- (void)setChannel:;
- (void).cxx_destruct;
- (void)setTotalTime:;
- (void)setBundle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
