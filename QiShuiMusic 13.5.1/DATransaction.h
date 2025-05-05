@interface DATransaction : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) NSString transactionId;
- (id)initWithLabel:;
- (id)init;
- (void)dealloc;
- (id)label;
- (void).cxx_destruct;
- (id)transactionId;
@end
