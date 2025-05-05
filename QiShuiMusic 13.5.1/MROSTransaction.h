@interface MROSTransaction : NSObject
@property (nonatomic) NSString transactionName;
- (id)initWithName:;
- (void).cxx_destruct;
- (void)invalidateTransaction;
- (id)description;
- (id)transactionName;
@end
