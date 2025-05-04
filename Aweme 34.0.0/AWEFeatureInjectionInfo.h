@interface AWEFeatureInjectionInfo : NSObject
@property (nonatomic) Protocol protocol;
@property (nonatomic) NSString sourceIdentifier;
@property (nonatomic) Q source;
- (void)setProtocol:;
- (id)protocol;
- (void)setSourceIdentifier:;
- (void).cxx_destruct;
- (unsigned long long)source;
- (void)setSource:;
- (BOOL)isEqual:;
- (id)sourceIdentifier;
+ (id)injectionInfoForProtocol:forContextObjectKey:;
@end
