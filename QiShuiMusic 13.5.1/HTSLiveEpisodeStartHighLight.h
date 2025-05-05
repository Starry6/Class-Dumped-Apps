@interface HTSLiveEpisodeStartHighLight : IESLivePBBaseMessage
@property (nonatomic) BOOL standard;
@property (nonatomic) NSString description_p;
@property (nonatomic) q location;
+ (id)descriptor;
@end
