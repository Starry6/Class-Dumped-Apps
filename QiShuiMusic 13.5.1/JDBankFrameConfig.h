@interface JDBankFrameConfig : NSObject
@property (nonatomic) NSInteger bankId;
@property (nonatomic) NSData frameConfig;
- (void).cxx_destruct;
- (int)bankId;
- (id)frameConfig;
- (id)initWithBankId:andFrameConfig:;
@end
