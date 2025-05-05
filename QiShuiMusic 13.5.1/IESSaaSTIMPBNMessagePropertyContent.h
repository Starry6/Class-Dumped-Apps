@interface IESSaaSTIMPBNMessagePropertyContent : GPBMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) IESSaaSTIMPBNSyncContent syncContent;
@property (nonatomic) BOOL hasSyncContent;
@property (nonatomic) IESSaaSTIMPBNReactionContent reactionContent;
@property (nonatomic) BOOL hasReactionContent;
@property (nonatomic) q indexInMessage;
@property (nonatomic) BOOL hasIndexInMessage;
+ (id)descriptor;
@end
