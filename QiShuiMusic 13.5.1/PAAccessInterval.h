@interface PAAccessInterval : NSObject
@property (nonatomic) NSNumber slot;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)slot;
- (void)end;
- (void)dealloc;
- (void)endWithTimestampAdjustment:;
- (void)recordAccessToAssetIdentifiers:withVisibilityState:accessEventCount:;
- (id)initWithLogger:slot:;
- (void).cxx_destruct;
- (id)description;
+ (id)placeholderAccessInterval;
@end
