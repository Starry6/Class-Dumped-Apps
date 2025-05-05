@interface HTSLiveLinkerUpdateLinkTypeApplyContent : IESLivePBBaseMessage
@property (nonatomic) NSString fromOpenId;
@property (nonatomic) NSString toOpenId;
@property (nonatomic) NSInteger linkType;
@property (nonatomic) NSInteger source;
@property (nonatomic) NSString ackMessage;
@property (nonatomic) NSString toast;
+ (id)descriptor;
@end
