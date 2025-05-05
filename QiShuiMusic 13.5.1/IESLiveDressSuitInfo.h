@interface IESLiveDressSuitInfo : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSString schema;
@property (nonatomic) HTSLiveImage badge;
@property (nonatomic) BOOL hasBadge;
@property (nonatomic) NSString suitId;
@property (nonatomic) NSString userSuitId;
@property (nonatomic) NSInteger scene;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
