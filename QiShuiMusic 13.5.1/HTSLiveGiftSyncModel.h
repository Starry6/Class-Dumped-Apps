@interface HTSLiveGiftSyncModel : IESLiveDynamicModel
@property (nonatomic) NSNumber resourceID;
@property (nonatomic) NSString resourceURI;
@property (nonatomic) NSArray urls;
@property (nonatomic) NSString md5;
@property (nonatomic) NSString resourcePath;
@property (nonatomic) NSString localMD5;
@property (nonatomic) NSNumber localFileSize;
@property (nonatomic) NSInteger resourceType;
@property (nonatomic) Q downloaderUsed;
@property (nonatomic) HTSLiveCleanStrategy cleanStrategy;
- (id)cleanStrategy;
- (void)setCleanStrategy:;
- (void).cxx_destruct;
@end
