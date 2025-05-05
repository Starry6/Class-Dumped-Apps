@interface APBBisUploadGwRequest : NSObject
@property (nonatomic) NSString bisToken;
@property (nonatomic) NSString content;
@property (nonatomic) NSString contentSig;
@property (nonatomic) NSString behavLog;
@property (nonatomic) NSString behavLogSig;
- (void)setBehavLogSig:;
- (id)behavLog;
- (id)behavLogSig;
- (id)bisToken;
- (id)contentSig;
- (void)setBehavLog:;
- (void)setBisToken:;
- (void)setContentSig:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
@end
