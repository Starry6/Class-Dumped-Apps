@interface IESECInteractionElement : GPBMessage
@property (nonatomic) NSInteger elementType;
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColor;
@property (nonatomic) IESECInteractionAvatar avatars;
@property (nonatomic) BOOL hasAvatars;
@property (nonatomic) NSInteger blankWidth;
@property (nonatomic) NSInteger textSize;
+ (id)descriptor;
@end
