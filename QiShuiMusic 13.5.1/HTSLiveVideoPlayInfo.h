@interface HTSLiveVideoPlayInfo : IESLivePBBaseMessage
@property (nonatomic) NSString format;
@property (nonatomic) NSMutableArray playUrlsArray;
@property (nonatomic) Q playUrlsArray_Count;
@property (nonatomic) NSString postURL;
+ (id)descriptor;
@end
