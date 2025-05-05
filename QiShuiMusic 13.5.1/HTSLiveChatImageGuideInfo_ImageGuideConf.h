@interface HTSLiveChatImageGuideInfo_ImageGuideConf : IESLivePBBaseMessage
@property (nonatomic) NSString imageId;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) NSString text;
@property (nonatomic) NSMutableArray triggerWordsArray;
@property (nonatomic) Q triggerWordsArray_Count;
@property (nonatomic) q beginTime;
@property (nonatomic) q endTime;
+ (id)descriptor;
@end
