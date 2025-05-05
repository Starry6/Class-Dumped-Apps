@interface HTSLiveMemberEntranceInfo : IESLivePBBaseMessage
@property (nonatomic) q type;
@property (nonatomic) BOOL showEntrance;
@property (nonatomic) NSString schema;
@property (nonatomic) HTSLiveImage singleEntranceIcon;
@property (nonatomic) BOOL hasSingleEntranceIcon;
@property (nonatomic) HTSLiveImage doubleEntranceIcon;
@property (nonatomic) BOOL hasDoubleEntranceIcon;
@property (nonatomic) BOOL isMember;
@property (nonatomic) NSMutableDictionary trackingParams;
@property (nonatomic) Q trackingParams_Count;
+ (id)descriptor;
@end
