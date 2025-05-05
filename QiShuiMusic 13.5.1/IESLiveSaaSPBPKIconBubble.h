@interface IESLiveSaaSPBPKIconBubble : GPBMessage
@property (nonatomic) IESLiveSaaSPBImage displayIcon;
@property (nonatomic) BOOL hasDisplayIcon;
@property (nonatomic) IESLiveSaaSPBText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) NSString schema;
@property (nonatomic) NSInteger bubbleType;
+ (id)descriptor;
@end
