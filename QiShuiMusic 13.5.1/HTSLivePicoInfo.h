@interface HTSLivePicoInfo : IESLivePBBaseMessage
@property (nonatomic) q picoLiveType;
@property (nonatomic) NSString picoVirtualLiveBgImageUri;
@property (nonatomic) NSString picoCreateScene;
@property (nonatomic) NSString customInfo;
@property (nonatomic) NSString picoVirtualLiveBgImageDigest;
@property (nonatomic) HTSLivePicoInfo_VirtualLiveBgImages virtualLiveBgImages;
@property (nonatomic) BOOL hasVirtualLiveBgImages;
@property (nonatomic) float pitch;
@property (nonatomic) q clientLiveType;
@property (nonatomic) NSString picoStreamLayout;
@property (nonatomic) q picoLiveMode;
@property (nonatomic) NSInteger picoVrTransfer;
@property (nonatomic) NSMutableDictionary streamMapping;
@property (nonatomic) Q streamMapping_Count;
+ (id)descriptor;
@end
