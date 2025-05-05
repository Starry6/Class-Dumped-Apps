@interface VSHash : NSObject
@property (nonatomic) BOOL finalized;
@property (nonatomic) {CC_SHA256state_st=[2I][8I][16I]} ctx;
@property (nonatomic) NSData finalData;
- (id)init;
- (void)setFinalized:;
- (void)dealloc;
- (void)setCtx:;
- (void)updateWithString:;
- (BOOL)isFinalized;
- (void)updateWithData:;
- (void).cxx_destruct;
- (id)ctx;
- (id)finalData;
- (void)setFinalData:;
- (void)updateWithDate:;
- (void)updateWithInteger:;
- (void)updateWithUUID:;
@end
