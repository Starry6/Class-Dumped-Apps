@interface AWEPzDomainRegisterModel : NSObject
@property (nonatomic) NSString domainName;
@property (nonatomic) AWEPzDomainModel defaultConfig;
@property (nonatomic) BOOL needTrackComponent;
- (BOOL)needTrackComponent;
- (void)setNeedTrackComponent:;
- (id)domainName;
- (id)defaultConfig;
- (void)setDomainName:;
- (void).cxx_destruct;
- (void)setDefaultConfig:;
@end
