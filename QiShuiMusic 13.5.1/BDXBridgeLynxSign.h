@interface BDXBridgeLynxSign : NSObject
@property (nonatomic) Q verifyType;
@property (nonatomic) q feID;
@property (nonatomic) Q totalLength;
@property (nonatomic) NSArray signSuites;
@property (nonatomic) NSNumber checkErrorCode;
- (id)checkErrorCode;
- (long long)feID;
- (void)setCheckErrorCode:;
- (void)setFeID:;
- (void)setSignSuites:;
- (id)signSuites;
- (void).cxx_destruct;
- (unsigned long long)verifyType;
- (void)setVerifyType:;
- (void)setTotalLength:;
- (unsigned long long)totalLength;
@end
