@interface IESLiveSaaSRecoderFactoryImp_douyin : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createIESLiveRecoderWithMMRecoder:;
- (long long)currentCaptureOrientation;
- (id)recoderWithPreview:config:;
- (id)recoderWithPreview:config:source:;
+ (void)ieslivekit_xstone_binding_template;
@end
