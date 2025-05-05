@interface IESLivePrefSampleNetInfo : NSObject
@property (nonatomic) NSString net_type;
@property (nonatomic) NSNumber connectionType;
@property (nonatomic) NSNumber upload;
@property (nonatomic) NSNumber download;
@property (nonatomic) NSNumber http_rtt;
- (id)http_rtt;
- (id)net_type;
- (void)setHttp_rtt:;
- (void)setNet_type:;
- (id)connectionType;
- (void)setConnectionType:;
- (id)download;
- (void).cxx_destruct;
- (void)setDownload:;
- (id)upload;
- (void)setUpload:;
@end
