@interface AWELiveAnchorStableModePushContent : NSObject
@property (nonatomic) q pushType;
@property (nonatomic) NSString reason;
@property (nonatomic) NSString detail;
@property (nonatomic) NSString action;
@property (nonatomic) NSDictionary params;
@property (nonatomic) @? clickAction;
- (id)clickAction;
- (void)setClickAction:;
- (void)setPushType:;
- (long long)pushType;
- (void)setDetail:;
- (void)setAction:;
- (void)setReason:;
- (id)action;
- (id)detail;
- (void).cxx_destruct;
- (id)reason;
- (id)params;
- (void)setParams:;
@end
