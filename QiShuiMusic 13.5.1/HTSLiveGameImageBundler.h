@interface HTSLiveGameImageBundler : IESLivePBBaseMessage
@property (nonatomic) HTSLiveGameImage originImage;
@property (nonatomic) BOOL hasOriginImage;
@property (nonatomic) HTSLiveGameImage thumbImage;
@property (nonatomic) BOOL hasThumbImage;
@property (nonatomic) HTSLiveGameImage thumbHeifImage;
@property (nonatomic) BOOL hasThumbHeifImage;
+ (id)descriptor;
@end
