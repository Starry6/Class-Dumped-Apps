@interface HTSLiveShareResource : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage toastBackground;
@property (nonatomic) BOOL hasToastBackground;
@property (nonatomic) NSMutableDictionary qrcode;
@property (nonatomic) Q qrcode_Count;
@property (nonatomic) NSString ugShareInfo;
+ (id)descriptor;
@end
