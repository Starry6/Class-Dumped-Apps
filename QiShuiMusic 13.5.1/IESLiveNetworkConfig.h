@interface IESLiveNetworkConfig : NSObject
@property (nonatomic) <IESLiveNetworkConfig> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commonPath;
- (void)configBOEEnvWithRequestModel:;
- (void)configRequestHeaders:;
- (id)newPathByPathMapWithOriginalPath:;
- (id)requestCommonParams;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)shared;
@end
