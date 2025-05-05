@interface BDLyxnChannelConfig : BDLynxBaseConfig
@property (nonatomic) NSString version;
@property (nonatomic) BDLynxChannelIOSConfig iOSConfig;
- (id)iOSConfig;
- (void)setIOSConfig:;
- (void)updateWithDictionary:;
- (void)setVersion:;
- (id)version;
- (void).cxx_destruct;
@end
