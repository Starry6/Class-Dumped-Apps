@interface RoomIntroLabel : IESLivePBBaseMessage
@property (nonatomic) NSInteger labelTag;
@property (nonatomic) NSString labelName;
@property (nonatomic) NSString labelText;
@property (nonatomic) NSString labelIcon;
@property (nonatomic) NSString typeName;
+ (id)descriptor;
@end
