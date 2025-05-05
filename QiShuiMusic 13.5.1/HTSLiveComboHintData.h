@interface HTSLiveComboHintData : IESLivePBBaseMessage
@property (nonatomic) q count;
@property (nonatomic) HTSLiveImage hintImg;
@property (nonatomic) BOOL hasHintImg;
@property (nonatomic) NSInteger comboHintType;
@property (nonatomic) NSString name;
+ (id)descriptor;
@end
