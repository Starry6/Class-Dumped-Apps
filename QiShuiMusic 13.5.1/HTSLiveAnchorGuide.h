@interface HTSLiveAnchorGuide : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) HTSLiveImage picture;
@property (nonatomic) BOOL hasPicture;
@property (nonatomic) NSInteger maxTextDisplayNum;
@property (nonatomic) NSInteger maxPictureDisplayNum;
+ (id)descriptor;
@end
