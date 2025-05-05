@interface IESECLivePlayerBizStainedTrackInfo : NSObject
@property (nonatomic) NSString bizDomain;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString useScene;
- (id)bizDomain;
- (id)initWithBizDomain:identifier:;
- (void)setBizDomain:;
- (id)transformToLiveTrackInfo;
- (id)useScene;
- (id)init;
- (id)identifier;
- (void).cxx_destruct;
- (void)setIdentifier:;
@end
