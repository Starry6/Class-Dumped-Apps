@interface IESSaaSTIMPBNParticipant : GPBMessage
@property (nonatomic) q userId;
@property (nonatomic) BOOL hasUserId;
@property (nonatomic) q sortOrder;
@property (nonatomic) BOOL hasSortOrder;
@property (nonatomic) NSInteger role;
@property (nonatomic) BOOL hasRole;
@property (nonatomic) NSString alias;
@property (nonatomic) BOOL hasAlias;
@property (nonatomic) NSString secUid;
@property (nonatomic) BOOL hasSecUid;
@property (nonatomic) NSInteger blocked;
@property (nonatomic) BOOL hasBlocked;
@property (nonatomic) q leftBlockTime;
@property (nonatomic) BOOL hasLeftBlockTime;
+ (id)descriptor;
@end
