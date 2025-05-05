@interface IESLiveOpenGameConfig : IESLivePBBaseMessage
@property (nonatomic) NSString appId;
@property (nonatomic) NSString appExtra;
@property (nonatomic) HTSLiveImage iconImage;
@property (nonatomic) BOOL hasIconImage;
@property (nonatomic) NSString gameTitle;
+ (id)descriptor;
@end
