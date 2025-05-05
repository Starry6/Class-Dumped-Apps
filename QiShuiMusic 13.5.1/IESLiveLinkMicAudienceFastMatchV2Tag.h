@interface IESLiveLinkMicAudienceFastMatchV2Tag : IESLivePBBaseMessage
@property (nonatomic) NSInteger tagType;
@property (nonatomic) NSString tagText;
@property (nonatomic) HTSLiveImage tagImage;
@property (nonatomic) BOOL hasTagImage;
+ (id)descriptor;
@end
