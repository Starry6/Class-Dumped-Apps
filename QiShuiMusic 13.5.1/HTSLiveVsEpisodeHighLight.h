@interface HTSLiveVsEpisodeHighLight : IESLivePBBaseMessage
@property (nonatomic) q location;
@property (nonatomic) NSString description_p;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) NSString pid;
+ (id)descriptor;
@end
