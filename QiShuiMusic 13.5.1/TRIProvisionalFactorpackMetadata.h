@interface TRIProvisionalFactorpackMetadata : TRIPBMessage
@property (nonatomic) NSString factorPackId;
@property (nonatomic) BOOL hasFactorPackId;
@property (nonatomic) BOOL rejected;
@property (nonatomic) BOOL hasRejected;
@property (nonatomic) I attempts;
@property (nonatomic) BOOL hasAttempts;
+ (id)descriptor;
@end
