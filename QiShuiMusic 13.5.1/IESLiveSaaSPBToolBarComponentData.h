@interface IESLiveSaaSPBToolBarComponentData : GPBMessage
@property (nonatomic) NSInteger groupId;
@property (nonatomic) NSInteger componentType;
@property (nonatomic) NSInteger opType;
@property (nonatomic) NSString text;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) IESLiveSaaSPBImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) q showType;
@property (nonatomic) q dataStatus;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
