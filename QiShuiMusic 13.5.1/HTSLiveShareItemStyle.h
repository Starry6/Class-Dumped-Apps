@interface HTSLiveShareItemStyle : IESLivePBBaseMessage
@property (nonatomic) NSString itemType;
@property (nonatomic) NSString itemId;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString name;
@property (nonatomic) NSString nameColor;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString description_p;
+ (id)descriptor;
@end
