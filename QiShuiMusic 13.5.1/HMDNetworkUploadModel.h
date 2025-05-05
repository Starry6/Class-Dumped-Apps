@interface HMDNetworkUploadModel : NSObject
@property (nonatomic) NSString uploadURL;
@property (nonatomic) NSData data;
@property (nonatomic) NSDictionary headerField;
@property (nonatomic) BOOL isManualTriggered;
- (void)setHeaderField:;
- (id)headerField;
- (BOOL)isManualTriggered;
- (void)setIsManualTriggered:;
- (void)setUploadURL:;
- (id)data;
- (void).cxx_destruct;
- (void)setData:;
- (id)uploadURL;
@end
