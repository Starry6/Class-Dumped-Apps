@interface IESLiveLinkRTCInteractClientUtils : NSObject
@property (nonatomic) NSString lastestAppId;
- (id)lastestAppId;
- (void)setLastestAppId:;
- (void).cxx_destruct;
+ (id)copyPixelBufferWithPixelBuffer:;
+ (id)taskIdGenerate:;
+ (unsigned long long)convertByteNetworkQuality:;
+ (id)convertData:width:height:;
+ (id)convertPublicStreaming:;
+ (id)convertToJsonData:;
+ (id)convertVideoCanvas:;
+ (id)convertVideoFrameInfo:;
+ (long long)convertVideoSinkPixelFormat:;
+ (id)copyWithLayout:withWaterMark:;
+ (id)createDarkFrameWithFrameSize:enableLeakFix:;
+ (id)getDefaultLayout:;
+ (id)getPlayModeDescription:;
+ (id)getRtcVendorName:;
+ (id)modifyLocation:withWidth:withHeight:;
+ (id)parseStreamName:;
+ (id)setPriorityForUrl:;
+ (unsigned long long)transferRenderMode:;
+ (id)copyWithLayout:;
+ (id)shareInstance;
@end
