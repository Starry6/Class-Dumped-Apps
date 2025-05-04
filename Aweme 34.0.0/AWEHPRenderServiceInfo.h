@interface AWEHPRenderServiceInfo : NSObject
@property (nonatomic) Q requestType;
@property (nonatomic) BOOL canHotReload;
@property (nonatomic) AWEHPTopTabEditModel editTab;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) NSString deviceID;
@property (nonatomic) BOOL hasAgreed;
@property (nonatomic) @? completion;
- (BOOL)hasAgreed;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (BOOL)canHotReload;
- (void)setCanHotReload:;
- (id)editTab;
- (void)setEditTab:;
- (void)setHasAgreed:;
- (void)setRequestType:;
- (unsigned long long)requestType;
- (id)completion;
- (void)setDeviceID:;
- (void)setCompletion:;
- (void).cxx_destruct;
- (id)deviceID;
@end
