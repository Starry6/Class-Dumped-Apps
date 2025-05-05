@interface IESSaaSTIMPBNReactionContent : GPBMessage
@property (nonatomic) NSInteger id_p;
@property (nonatomic) BOOL hasId_p;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) q targetMessageId;
@property (nonatomic) BOOL hasTargetMessageId;
@property (nonatomic) NSString targetClientMessageId;
@property (nonatomic) BOOL hasTargetClientMessageId;
+ (id)descriptor;
@end
