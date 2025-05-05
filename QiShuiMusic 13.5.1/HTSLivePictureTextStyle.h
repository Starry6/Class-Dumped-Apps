@interface HTSLivePictureTextStyle : IESLivePBBaseMessage
@property (nonatomic) HTSLiveText text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) HTSLiveText subText;
@property (nonatomic) BOOL hasSubText;
@property (nonatomic) HTSLiveImage picture;
@property (nonatomic) BOOL hasPicture;
@property (nonatomic) NSString schema;
+ (id)descriptor;
@end
