@interface AVCustomRoutingActionItem : NSObject
@property (nonatomic) UTType type;
@property (nonatomic) NSString overrideTitle;
- (id)init;
- (id)identifier;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (id)overrideTitle;
- (void)setOverrideTitle:;
@end
