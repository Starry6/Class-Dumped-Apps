@interface IESFalconGurdInterceptor : NSObject
@property (nonatomic) NSMutableDictionary accessKeyPatternDictionary;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_gurdMetaDataWithURLString:;
- (id)_gurdMetaDataWithURLString:ignorePrefix:accessKey:regex:;
- (id)accessKeyPatternDictionary;
- (id)falconMetaDataForURLRequest:;
- (void)registerPattern:forGurdAccessKey:;
- (void)registerPatterns:forGurdAccessKey:;
- (void)setAccessKeyPatternDictionary:;
- (BOOL)shouldInterceptForRequest:;
- (void)unregisterPatterns:;
- (void).cxx_destruct;
@end
