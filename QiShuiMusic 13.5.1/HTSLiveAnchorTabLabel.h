@interface HTSLiveAnchorTabLabel : IESLivePBBaseMessage
@property (nonatomic) NSString content;
@property (nonatomic) HTSLiveImage label;
@property (nonatomic) BOOL hasLabel;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSInteger style;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString key;
@property (nonatomic) NSString accessibleContent;
+ (id)descriptor;
@end
