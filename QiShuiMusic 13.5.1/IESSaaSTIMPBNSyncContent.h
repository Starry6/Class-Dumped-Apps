@interface IESSaaSTIMPBNSyncContent : GPBMessage
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) q targetMessageId;
@property (nonatomic) BOOL hasTargetMessageId;
@property (nonatomic) NSString targetClientMessageId;
@property (nonatomic) BOOL hasTargetClientMessageId;
+ (id)descriptor;
@end
