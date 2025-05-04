@interface AWEFeedTabJumpRollBackConfig : MTLModel
@property (nonatomic) q autoFoldTime;
@property (nonatomic) q autoDismissTime;
@property (nonatomic) NSArray unSupportedTabList;
@property (nonatomic) NSDictionary bottomOffsetDict;
@property (nonatomic) NSDictionary showTextDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)autoDismissTime;
- (void)setAutoDismissTime:;
- (void)setAutoFoldTime:;
- (long long)autoFoldTime;
- (id)unSupportedTabList;
- (id)bottomOffsetDict;
- (id)showTextDict;
- (void)setUnSupportedTabList:;
- (void)setBottomOffsetDict:;
- (void)setShowTextDict:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
