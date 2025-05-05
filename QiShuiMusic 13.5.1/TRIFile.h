@interface TRIFile : TRIPBMessage
@property (nonatomic) TRIAsset asset;
@property (nonatomic) BOOL hasAsset;
@property (nonatomic) NSString path;
@property (nonatomic) BOOL hasPath;
@property (nonatomic) BOOL isOnDemand;
@property (nonatomic) BOOL hasIsOnDemand;
- (BOOL)requiresDownload;
+ (id)descriptor;
@end
