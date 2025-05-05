@interface BDUGSyncBusiness : NSObject
@property (nonatomic) s businessID;
@property (nonatomic) c consumeType;
@property (nonatomic) c bucket;
- (void)setConsumeType:;
- (char)consumeType;
- (short)businessID;
- (void)setBusinessID:;
- (void)setBucket:;
- (char)bucket;
@end
