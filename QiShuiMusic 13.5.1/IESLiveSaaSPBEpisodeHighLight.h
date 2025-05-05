@interface IESLiveSaaSPBEpisodeHighLight : GPBMessage
@property (nonatomic) q location;
@property (nonatomic) NSString description_p;
@property (nonatomic) IESLiveSaaSPBImage image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) IESLiveSaaSPBImage smallImage;
@property (nonatomic) BOOL hasSmallImage;
@property (nonatomic) q locationEnd;
@property (nonatomic) BOOL hot;
@property (nonatomic) q collectionId;
@property (nonatomic) NSString pid;
@property (nonatomic) NSString locationStr;
+ (id)descriptor;
@end
