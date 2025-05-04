@interface AWELiveStatusInfo : MTLModel
@property (nonatomic) AWEUserModel liveUser;
@property (nonatomic) q liveStatus;
@property (nonatomic) NSDictionary liveNotifyLight;
@property (nonatomic) NSString previewText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)liveNotifyLight;
- (void)setLiveStatus:;
- (id)liveUser;
- (void)setLiveNotifyLight:;
- (void)setLiveUser:;
- (id)initWithJsonData:;
- (void)parseData:;
- (void).cxx_destruct;
- (long long)liveStatus;
- (void)setPreviewText:;
- (id)previewText;
@end
