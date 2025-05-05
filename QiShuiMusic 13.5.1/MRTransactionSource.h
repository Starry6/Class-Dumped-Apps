@interface MRTransactionSource : NSObject
@property (nonatomic) Q name;
@property (nonatomic) MRPlayerPath playerPath;
- (void)_begin;
- (void).cxx_destruct;
- (id)playerPath;
- (unsigned long long)name;
- (id)initWithName:playerPath:packets:delegate:;
- (void)_processMessage:;
@end
