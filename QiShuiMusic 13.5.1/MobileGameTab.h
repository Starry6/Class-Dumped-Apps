@interface MobileGameTab : IESLivePBBaseMessage
@property (nonatomic) BOOL isMobileGameAnchor;
@property (nonatomic) BOOL isAccepted;
@property (nonatomic) NSString schema;
+ (id)descriptor;
@end
