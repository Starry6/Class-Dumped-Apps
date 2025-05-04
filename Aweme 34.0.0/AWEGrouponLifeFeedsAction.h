@interface AWEGrouponLifeFeedsAction : NSObject
@property (nonatomic) NSString type;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSDictionary ditoParams;
@property (nonatomic) @? customBlock;
- (void)setCustomBlock:;
- (id)customBlock;
- (void)setDitoParams:;
- (id)ditoParams;
- (id)copyAction;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)createActionWithData:;
@end
