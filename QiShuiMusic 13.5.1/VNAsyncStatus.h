@interface VNAsyncStatus : NSObject
@property (nonatomic) BOOL completed;
@property (nonatomic) NSError error;
- (id)init;
- (id)error;
- (void).cxx_destruct;
- (id)description;
- (BOOL)completed;
- (id)initWithStatus:error:;
- (id)copyWithZone:;
@end
