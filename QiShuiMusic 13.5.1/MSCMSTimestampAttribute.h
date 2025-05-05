@interface MSCMSTimestampAttribute : NSObject
@property (nonatomic) NSURL serverURL;
@property (nonatomic) BOOL certChainRequested;
@property (nonatomic) MSCMSSignerInfo singerInfo;
@property (nonatomic) NSArray certificates;
@property (nonatomic) MSOID digestAlgorithm;
@property (nonatomic) NSDate timestampTime;
- (id)certificates;
- (void).cxx_destruct;
- (id)initWithAttribute:error:;
- (id)serverURL;
- (void)setServerURL:;
- (id)initWithServerURL:;
- (id)encodeAttributeWithError:;
- (id)initWithServerURL:chainRequested:;
- (id)initWithTimestampToken:;
- (BOOL)verifyTimestamps:;
- (BOOL)certChainRequested;
- (void)setCertChainRequested:;
- (id)singerInfo;
- (id)digestAlgorithm;
- (id)timestampTime;
@end
