@interface IESLiveMicPosTagInfo : IESLivePBBaseMessage
@property (nonatomic) IESLiveMicPosTagInfo localInfo;
@property (nonatomic) NSInteger tagType;
@property (nonatomic) NSString tagName;
@property (nonatomic) NSString textColorValue;
@property (nonatomic) NSString bgColorValue;
@property (nonatomic) q tagTypeId;
@property (nonatomic) HTSLiveImage bgColorImg;
@property (nonatomic) BOOL hasBgColorImg;
@property (nonatomic) BOOL openTagDescPage;
@property (nonatomic) NSString schema;
- (id)localInfo;
- (void)setLocalInfo:;
- (id)deepCopy;
+ (id)descriptor;
@end
