@interface BDXResourceLoaderPreloadMetaData : NSObject
@property (nonatomic) double saveTime;
@property (nonatomic) double cacheDuration;
@property (nonatomic) NSDictionary allHeaderFields;
@property (nonatomic) q statusCode;
@property (nonatomic) NSData falconData;
@property (nonatomic) IESFalconStatModel statModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)cacheDuration;
- (id)falconData;
- (double)saveTime;
- (void)setAllHeaderFields:;
- (void)setCacheDuration:;
- (void)setFalconData:;
- (void)setSaveTime:;
- (void)setStatModel:;
- (id)statModel;
- (void)setStatusCode:;
- (long long)statusCode;
- (void).cxx_destruct;
- (id)allHeaderFields;
@end
