@interface AWELifeFeedsInnerAction : NSObject
@property (nonatomic) NSString actionType;
@property (nonatomic) NSString targetKey;
@property (nonatomic) @? handler;
- (id)targetKey;
- (void)setTargetKey:;
- (id)actionType;
- (void)setHandler:;
- (void)setActionType:;
- (id)handler;
- (void).cxx_destruct;
@end
