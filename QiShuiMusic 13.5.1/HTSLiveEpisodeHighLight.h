@interface HTSLiveEpisodeHighLight : IESLivePBBaseMessage
@property (nonatomic) q location;
@property (nonatomic) NSString description_p;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) HTSLiveImage smallImage;
@property (nonatomic) BOOL hasSmallImage;
@property (nonatomic) q locationEnd;
@property (nonatomic) BOOL hot;
@property (nonatomic) q collectionId;
@property (nonatomic) NSString pid;
@property (nonatomic) NSString locationStr;
- (BOOL)live_containsLocation:;
+ (id)descriptor;
@end
