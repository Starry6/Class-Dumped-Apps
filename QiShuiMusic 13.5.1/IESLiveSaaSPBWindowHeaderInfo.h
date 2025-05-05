@interface IESLiveSaaSPBWindowHeaderInfo : GPBMessage
@property (nonatomic) NSString windowName;
@property (nonatomic) IESLiveSaaSPBAuthorReputation reputation;
@property (nonatomic) BOOL hasReputation;
@property (nonatomic) NSString windowURL;
+ (id)descriptor;
@end
